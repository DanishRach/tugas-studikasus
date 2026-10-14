#include <iostream>
using namespace std;

// Fungsi rekursif untuk menjumlahkan setiap digit dari sebuah angka
int sumDigits(int n) {

    // Base case:
    // Jika n sudah menjadi 0, rekursi dihentikan
    if (n == 0)
        return 0;

    // Mengambil digit terakhir menggunakan operator %
    // Kemudian menjumlahkannya dengan hasil rekursi
    //
    // n / 10 digunakan untuk menghilangkan digit terakhir
    return (n % 10) + sumDigits(n / 10);
}

int main() {

    // Angka pertama yang akan dihitung
    int n = 222;

    // Menampilkan jumlah digit dari angka 222
    cout << "Jumlah digit dari " << n
         << " adalah: " << sumDigits(n) << endl;

    // Mengganti nilai n menjadi 333
    n = 333;

    // Menampilkan jumlah digit dari angka 333
    cout << "Jumlah digit dari " << n
         << " adalah: " << sumDigits(n) << endl;

    return 0;
}