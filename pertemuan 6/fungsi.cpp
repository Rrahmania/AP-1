#include <iostream>
using namespace std;

// fungsi tanpa nilai balikan, Fungsi ini tidak mengembalikan nilai dan biasanya menggunakan tipe void.
void tampilkanpesan(){
    cout <<"==== SELAMAT DATANG DI AP 1 ====" << endl;
}

// funsi dengan nilai balikan, Fungsi ini mengembalikan suatu nilai kepada pemanggilnya menggunakan kata kunci return.
int tambah(int a, int b) {
    return a + b;
}

// fungsi overload, fitur dalam pemrograman yang memungkinkan kita mendefinisikan beberapa fungsi dengan nama yang sama, tetapi dengan parameter yang berbeda.
int kali(int a, int b){
    return a * b;
}

double kali(double a, double b) {
    return a * b;
}

// fungsi rekursif : menghitung nilai faktorial
int faktorial(int n){
    if (n == 0 || n == 1){
        return 1;
    } else {
        return n * faktorial(n -1);
    }
}

int main () {
    system ("CLS");

    // menggunakan fungsi nilai balikan
    tampilkanpesan();

    int x = 5, y = 3;
    // menggunakan fungsi dengan nilai balikan
    int hasiltambah = tambah(x, y);
    cout << "hasil penjumlahan : " << hasiltambah << endl;

    // menggunakan fungsi overload
    int hasilkaliint = kali(x, y);
    double hasilkalidouble = (5.5, 2.0);
    cout << "hasil perkalian (int) : " << hasilkaliint << endl;
    cout << "hasil perkalian (int) : " << hasilkalidouble << endl;

    // Menggunakan fungis rekusif
    int angka = 5;
    cout << "Faktorial dari " << angka << " adalah " << faktorial(angka) << endl;
}
