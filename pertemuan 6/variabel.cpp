#include <iostream>
using namespace std;

string namaGlobal = "Ilmu"; //global bisa diakses dimana aja.

void namaVariabel(){ //lokal
    string namaLokal = "komputer";
    // coba akses
    cout << namaLokal << endl;

    // coba akses
    cout << namaGlobal << endl;
}

int main(){
    namaVariabel();

    // coba akses
    // cout << namaGlobal << endl;

    // // coba akses
    // cout << namaLokal << endl; // ga bisa
}
