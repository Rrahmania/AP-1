#include <iostream>
using namespace std;

//parameter formal
void sapa(string nama) {
    cout << "Halo " << nama << "! Selamat belajar C++" << endl;
}

int main(){
    string namaPengguna = "nia"; //parameter aktual

    sapa(namaPengguna); 

    return 0;
}