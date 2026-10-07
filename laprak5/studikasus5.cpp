#include <iostream>
using namespace std;

// Fungsi untuk menampilkan faktorial dari 1 sampai n
void displayFactorial(int n) {

    // Nilai awal faktorial adalah 1
    int factorial = 1;

    // Perulangan dari 1 sampai n
    for (int i = 1; i <= n; i++) {

        // Mengalikan factorial dengan nilai i
        factorial *= i;

        // Menampilkan hasil faktorial setiap angka
        cout << "Faktorial dari " << i
             << " adalah " << factorial << endl;
    }
}

int main() {

    // Menentukan angka yang ingin dihitung
    int num = 5;

    // Memanggil fungsi displayFactorial
    displayFactorial(num);

    return 0;
}