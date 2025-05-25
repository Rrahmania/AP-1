#include <iostream>
#include <vector>
using namespace std;

int main(){
    //vektor deklarasi dan inisialisasi, vector bekerja sama seperti array tapi lebih dinamis.
    vector<string> nama_karyawan = {"b","de","co"};

    for (string karyawan : nama_karyawan){
        cout << karyawan << endl;
    }

    //add data to vector, menggunakan push_back.
    nama_karyawan.push_back("cindy");

    // for (int i = 0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i]<< endl;
    // }

    //delete data from vektor, menggunakan library pop_back.
    nama_karyawan.pop_back();
    
    // menghapus elemen tersebut dari vector.
    nama_karyawan.erase(nama_karyawan.begin() + 2);

    // digunakan untuk mendapatkan jumlah elemen setelah penghapusan.
    for (int i = 0; i < nama_karyawan.size(); i++){
        cout << nama_karyawan[i]<< endl;
    }
}
