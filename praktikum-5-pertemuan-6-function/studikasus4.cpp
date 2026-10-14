#include <iostream>
using namespace std;

// Fungsi rekursif untuk mencetak pola bintang
void printStars(int n) {

    // Base case:
    // Jika n <= 0, fungsi berhenti
    if (n <= 0)
        return;

    // Memanggil fungsi dengan nilai n yang lebih kecil
    // hingga mencapai kondisi n <= 0
    printStars(n - 1);

    // Setelah rekursi selesai, mencetak bintang sebanyak n
    for (int i = 0; i < n; i++) {
        cout << "* ";
    }

    // Pindah ke baris berikutnya
    cout << endl;
}

int main() {

    // Menentukan jumlah baris yang ingin ditampilkan
    int rows = 5;

    // Memanggil fungsi untuk mencetak pola bintang
    printStars(rows);

    return 0;
}