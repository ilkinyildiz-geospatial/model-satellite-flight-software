#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#ifdef _WIN32
#include <windows.h>
#define sleep(x) Sleep(1000 * x)
#endif

uint8_t uydu_statusu = 0;

void ucus_yazilimi(float hiz_m, float yukseklik_m)
{
    if (uydu_statusu == 0) {
        if (yukseklik_m <= 15.0f) {
            printf("Statü 0: Roket yerde!\n");
        } else if (yukseklik_m > 15.0f) {
            uydu_statusu = 1;
            printf("Statü 1: Roket yükseliyor...\n");
        }
    }

    else if (uydu_statusu == 1) {
        if (hiz_m <= 0.0f) {
            uydu_statusu = 2;
            printf("Statü 2: Apogee! İnişe geçiyor.\n");
        }
    }

    else if (uydu_statusu == 2) {
        if (yukseklik_m <= 410.0f) {
            uydu_statusu = 3;
            printf("Statü 3: Görev yükü ayrıldı. (Servo çalıştı)\n");
        }
    }

    else if (uydu_statusu == 3) {
        if (yukseklik_m <= 390.0f) {
            uydu_statusu = 4;
            printf("Statü 4: Görev yükü inişte...\n");
        }
    }

    else if (uydu_statusu == 4) {
        if (yukseklik_m <= 15.0f) {
            uydu_statusu = 5;
            printf("Statü 5: Görev yükü yere indi. (Buzzer aktif)\n");
        }
    }
}


int main()
{
    float yukseklik[] = {5, 17, 820, 400, 300, 10};
    float hiz[]        = {5, 20, 0, -5, -5, -3};
    int n = 6;

    for (int i = 0; i < n; i++) {
        ucus_yazilimi(hiz[i], yukseklik[i]);
        printf("Adım %d: yükseklik=%.2f m, hız=%.2f m/s, Statü=%d\n",
               i+1, yukseklik[i], hiz[i], uydu_statusu);
        sleep(1);
    }

    return 0;
}
