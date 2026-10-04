#include <iostream>
#include <string>
using namespace std;

int main() {
    int pilihanUtama;

    do {
        cout << "\n=========================================\n";
        cout << "        KUMPULAN PROGRAM PERULANGAN        \n";
        cout << "=========================================\n";
        cout << "1. Menghitung pengeluaran harian (for)\n";
        cout << "2. Menabung setiap hari (for)\n";
        cout << "3. Mengisi bensin hingga target (while)\n";
        cout << "4. Memasukkan PIN ATM (while)\n";
        cout << "5. Pesan makanan di kantin (do while)\n";
        cout << "6. Mengecek suhu tubuh (do while)\n";
        cout << "7. Menghitung jumlah langkah olahraga (while)\n";
        cout << "0. Keluar\n";
        cout << "Masukkan pilihan (0-7): ";
        cin >> pilihanUtama;
        cout << "-----------------------------------------\n";

        // Menggunakan block {} pada setiap case untuk mengisolasi variabel lokal
        switch (pilihanUtama) {
            case 1: {
                int total = 0, pengeluaran;
                for (int i = 1; i <= 7; i++) {
                    cout << "Masukkan pengeluaran hari ke-" << i << ": Rp";
                    cin >> pengeluaran;
                    total += pengeluaran;
                }
                cout << "Total pengeluaran selama seminggu: Rp" << total << endl;
                break;
            }
            case 2: {
                int totalTabungan = 0;
                int nominal = 10000;
                for (int i = 1; i <= 30; i++) {
                    totalTabungan += nominal;
                }
                cout << "Total tabungan setelah 30 hari: Rp" << totalTabungan << endl;
                break;
            }
            case 3: {
                int liter = 0;
                while (liter < 10) {
                    liter++;
                    cout << "Mengisi bensin... Total saat ini: " << liter << " liter" << endl;
                }
                cout << "Pengisian selesai. Tangki penuh (10 liter)." << endl;
                break;
            }
            case 4: {
                string pinBenar = "123456";
                string pinInput;
                cout << "Masukkan PIN Anda: ";
                cin >> pinInput;
                while (pinInput != pinBenar) {
                    cout << "PIN salah. Silakan masukkan kembali: ";
                    cin >> pinInput;
                }
                cout << "Login berhasil." << endl;
                break;
            }
            case 5: {
                int pilihanKantin;
                do {
                    cout << "\nMenu Kantin:\n";
                    cout << "1. Nasi Goreng\n";
                    cout << "2. Mie Goreng\n";
                    cout << "3. Soto\n";
                    cout << "0. Selesai\n";
                    cout << "Pilih menu (0-3): ";
                    cin >> pilihanKantin;
                    
                    if (pilihanKantin == 1) cout << "Anda memesan Nasi Goreng.\n";
                    else if (pilihanKantin == 2) cout << "Anda memesan Mie Goreng.\n";
                    else if (pilihanKantin == 3) cout << "Anda memesan Soto.\n";
                    else if (pilihanKantin != 0) cout << "Pilihan tidak valid.\n";
                } while (pilihanKantin != 0);
                cout << "Pesanan kantin selesai." << endl;
                break;
            }
            case 6: {
                float suhu;
                do {
                    cout << "Masukkan suhu tubuh (Celcius): ";
                    cin >> suhu;
                    if (suhu < 35.0 || suhu > 42.0) {
                        cout << "Suhu tidak valid! Masukkan nilai antara 35 - 42.\n";
                    }
                } while (suhu < 35.0 || suhu > 42.0);
                cout << "Suhu tubuh tercatat valid: " << suhu << " °C" << endl;
                break;
            }
            case 7: {
                int totalLangkah = 0;
                int langkahSesi;
                while (totalLangkah < 10000) {
                    cout << "Masukkan jumlah langkah sesi ini: ";
                    cin >> langkahSesi;
                    totalLangkah += langkahSesi;
                    cout << "Total langkah saat ini: " << totalLangkah << endl;
                }
                cout << "Selamat! Target tercapai dengan total " << totalLangkah << " langkah." << endl;
                break;
            }
            case 0:
                cout << "Program dihentikan. Terima kasih!" << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
                break;
        }
    } while (pilihanUtama != 0);

    return 0;
}