#include <iostream>
using namespace std;

int main() {
    int n = 5;

    cout << "1. Segitiga Siku-Siku Rata Kanan\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int k = 1; k <= i; k++) cout << "*";
        cout << endl;
    }

    cout << "\n2. Segitiga Siku-Siku Terbalik Rata Kanan\n";
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int k = 1; k <= i; k++) cout << "*";
        cout << endl;
    }

    cout << "\n3. Segitiga Siku-Siku Rata Kanan Berongga\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) cout << " ";
        for (int k = 1; k <= i; k++) {
            // Cetak bintang hanya di tepi atau di baris terakhir
            if (k == 1 || k == i || i == n) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

    return 0;
}