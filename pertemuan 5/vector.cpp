#include <iostream>
#include <vector>
using namespace std;

int main(){
    //vektor deklarasi dan inisialisasi

    vector<string> nama_karyawan = {"b","de","co"};

    for (string karyawan : nama_karyawan){
        cout << karyawan << endl;

    }

    //add data to vector
    nama_karyawan.push_back("cindy");

    // for (int i = 0; i < nama_karyawan.size(); i++){
    //     cout << nama_karyawan[i]<< endl;
    // }

    //delete data from vektor
    nama_karyawan.pop_back();

    nama_karyawan.erase(nama_karyawan.begin() + 2);

    for (int i = 0; i < nama_karyawan.size(); i++){
        cout << nama_karyawan[i]<< endl;
    }
}