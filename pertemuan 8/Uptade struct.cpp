#include <iostream>
#include <string>
#include <vector>
using namespace std;

// struct kumpulan variabel dengan tipe data yang berbeda dikelompokan jadi satu nama.
struct Alamat{
    string jalan;
    string kota;
    int kodePos;
};

struct Mahasiswa
{
    string nama;
    int umur;
    float ipk;
    Alamat alamat; //nested struct, yaitu struct dapat memiliki struct lain sebagai anggota.
};

int main()
{
    system("CLS");
    Mahasiswa mhs1;
//     mhs1.alamat.jalan = "Jalan Jamin Ginting";
//     mhs1.alamat.kodePos = 21272;
//     mhs1.alamat.kota = "medan";
//     cout<<"Alamat : "<<mhs1.alamat.jalan<<" "<<mhs1.alamat.kota<<" "<<mhs1.alamat.kodePos<<endl;

vector <Mahasiswa> mahasiswa;
int n;
cout<<"Masukan banyak Mahasiswa : ";
cin>>n;

for(int i = 0; i < n; i++){
    cout << "Mahasiswa "<< i + 1 <<endl;

    cin.get();
    cout<<"Masukan nama : ";
    getline(cin, mhs1.nama);

    cout<<"Masukan Umur : ";
    cin>>mhs1.umur;

    cout<<"Masukan ipk : ";
    cin>>mhs1.ipk;

    mahasiswa.push_back(mhs1); //untuk menambahkan elemen ke akhir
}
for (int i = 0; i < n; i++){
    cout << "Mahasiswa " << i + 1 <<endl;
    cout << "Nama : " << mahasiswa[i].nama<<endl;
    cout << "Umur : " << mahasiswa[i].umur<<endl;
    cout << "IPK : " << mahasiswa[i].ipk<<endl;
}
}
