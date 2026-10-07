#include <iostream>
using namespace std;

// Fungsi rekursif
void recursion() {

    // Menampilkan tulisan "Halo."
    cout << "Halo." << endl;

    // Fungsi memanggil dirinya sendiri
    recursion();
}

int main() {

    // Memanggil fungsi recursion()
    recursion();

    return 0;
}