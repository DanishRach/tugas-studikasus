#include <iostream>
using namespace std;

// Fungsi rekursif untuk menghitung jumlah dari 1 sampai n
int sum(int n) {

    // Base case:
    // Jika n <= 0, rekursi dihentikan dan mengembalikan nilai 0
    if (n <= 0)
        return 0;

    // Recursive case:
    // Menambahkan nilai n dengan hasil pemanggilan sum(n - 1)
    return n + sum(n - 1);
}

int main() {

    // Menentukan nilai n
    int n = 3;

    // Menampilkan hasil penjumlahan dari 1 sampai n
    cout << "Jumlah dari 1 hingga " << n << " adalah: "
         << sum(n) << endl;

    return 0;
}