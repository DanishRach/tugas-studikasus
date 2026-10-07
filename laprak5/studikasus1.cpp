#include <iostream>
using namespace std;

// Fungsi untuk menghitung kuadrat dari sebuah bilangan
void calculateSquare(int number) {

    // Mengalikan nilai number dengan dirinya sendiri
    number *= number;

    // Catatan:
    // Perubahan nilai number hanya terjadi di dalam fungsi
    // karena parameter dikirim menggunakan pass by value.
}

int main() {

    // Menentukan nilai awal
    int num = 5;

    // Memanggil fungsi calculateSquare
    calculateSquare(num);

    // Menampilkan nilai num
    cout << "Kuadrat dari " << num << " adalah " << num << endl;

    return 0;
}