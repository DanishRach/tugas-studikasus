#include <iostream>              // Memanggil library iostream untuk cin dan cout
using namespace std;             // Agar tidak perlu menulis std::cin dan std::cout

int main() {                     // Fungsi utama program

    int num;                     // Membuat variabel num bertipe integer

    cout << "Masukkan sebuah angka: ";  // Meminta pengguna memasukkan angka
    cin >> num;                  // Menerima input angka dari pengguna

    // Menampilkan teks faktor dari angka yang dimasukkan
    cout << "Faktor-faktor dari " << num << " adalah: ";

    // Melakukan perulangan dari 1 sampai angka yang dimasukkan
    for (int i = 1; i <= num; ++i) {

        // Mengecek apakah num habis dibagi i
        if (num % i == 0) {

            // Jika sisa pembagian 0, maka i adalah faktor
            cout << i << " ";
        }
    }

    return 0;                    // Mengakhiri program
}