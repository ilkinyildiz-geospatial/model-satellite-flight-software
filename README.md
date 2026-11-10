# Model Satellite Flight Software 🛰️🚀



A beginner-friendly C program that simulates model satellite (CanSat) flight software. It uses a finite state machine logic to transition through various mission phases (statuses) based on real-time altitude and velocity telemetry.

#### Features
* **State Machine Logic (`ucus_yazilimi`):** Tracks flight stages from ground state (Statü 0) up to payload landing (Statü 5)[cite: 6].
* **Cross-Platform Support:** Includes custom preprocessor directives for Windows (`Sleep`) and POSIX (`sleep`) compatibility[cite: 6].
* **Simulation Loop (`main`):** Uses mock telemetry arrays (altitude and velocity values) to test state transitions sequentially with time delays[cite: 6].

---

Model uydu (CanSat) uçuş yazılımını simüle eden, C dilinde yazılmış başlangıç seviyesine uygun bir program. Gerçek zamanlı yükseklik ve hız verilerine dayanarak çeşitli görev aşamaları (statüler) arasında geçiş yapmak için sonlu durum makinesi mantığını kullanır.

#### Özellikler
* **Durum Makinesi Mantığı (`ucus_yazilimi`):** Yerdeki başlangıç durumundan (Statü 0) görev yükünün yere inmesine kadar (Statü 5) tüm uçuş aşamalarını takip eder[cite: 6].
* **Çapraz Platform Desteği:** Windows (`Sleep`) ve POSIX (`sleep`) uyumluluğu için ön işlemci direktifleri içerir[cite: 6].
* **Simülasyon Döngüsü (`main`):** Zaman gecikmeleriyle durum geçişlerini sırayla test etmek için örnek telemetri dizilerini (yükseklik ve hız değerleri) kullanır[cite: 6].

---

## 🚀 Usage / Kullanım

Compile and run the program using GCC:
Programı GCC ile derleyip çalıştırabilirsiniz:

```bash
gcc model_uydu_ucus.c -o model_uydu_ucus
./model_uydu_ucus
