#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
};

int main(){
    Mahasiswa mhs1;

    mhs1.nama = "Nia";
    mhs1.umur = 19;
    mhs1.ipk = 3.74;

    // cout<<"Akses dengan . : "<< endl;
    // cout<<"Nama : "<<mhs1.nama<<endl;
    // cout<<"Umur : "<<mhs1.umur<<endl;
    // cout<<"IPK  :"<<mhs1.ipk<<endl;

    Mahasiswa *ptrMhs = &mhs1; //Membuat pointer ptrMhs yang menunjuk ke objek mhs1.
    cout << "akses dengan -> : "<<endl;
    cout<<"Nama : "<<ptrMhs->nama<<endl;
    cout<<"Umur : "<<ptrMhs->umur<<endl;
    cout<<"IPK  :"<<ptrMhs->ipk<<endl;
}
