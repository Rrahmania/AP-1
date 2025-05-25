#include <iostream>
#include <string>
#include <array>
using namespace std;

int main(){
    //aray declaration & intalation, tipe tersetruktur yang terdiri dari sejumlah komponen darai tipe data sama. 
    //2 cara membuat array

    // cara 1 : array kosong
    // string nama[5];

    // // nama[0] = "Alya";
    // // nama[1] = "Parul";
    // // nama[2] = "auric";
    // // nama[3] = "ual";
    // // nama[5] = "ulan";

    // // cara 2 : Array yang langsung di isi
    // string nama[5] = {"Alya","Parul","auric","ual","ulan"};
    // string nama[] = {"Alya","Parul","auric","ual","ulan"};

    //asending element in array, untuk pengurutan elemen dalam array dari nilai terkecil ke terbesar.
    // cout<<nama[0]<<endl;
    // cout<<nama[0]<<endl;
    // cout<<nama[0]<<endl;
    // cout<<nama[0]<<endl;
    // cout<<nama[0]<<endl;

    //Menggunakan Looping 
    // for (int i = 0; i <5; i++) {
    //     cout<<nama[i]<<endl;
    // }

    //Desending, untuk pengurutan elemen dalam array dari nilai terbesar ke terkecil.
    // for (int i = 4; i > = 0; i--) {
    //     cout<<nama[i]<<endl;
    // }

    //Multidemensional array(Array adalam array)
    // 1 3 5
    // 2 4 6

    // int matrix[2][3] = {{1,3,5},{2,4,6}};
    // for(int i = 0; i < 2; i++){
    //     for (int j = 0; j < 3; j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // int matrix[4][6]={{1,2,3,4,5,6},{1,2,4,5,6,7},{1,2,4,5,6,7},{1,2,4,5,6,7}};
    // int matrix[4][6] = {
    //     {1, 2, 3, 4, 5, 6},
    //     {7, 8, 9, 10, 11, 12},
    //     {13, 14, 15, 16, 17, 18},
    //     {19, 20, 21, 22, 23, 24}
    // };

    // for (int i = 0; i < 4; i++) {
    //     for (int j = 0; j < 6; j++) {
    //         cout << matrix[i][j] << " ";
    //     }
    //     cout << endl;

    //string (array of characters), indeks karakter yang ingin diambil.
    // string nama = "naufal";
    // cout<<nama[0]<<endl;
    // cout<<nama[2]<<endl;
    
    // for (int i = 0; i<nama.length(); i++){
    //     cout<<nama[i]<<endl;
    // }

    string s1 = "Hello";
    string s2 = "word";

    // 1.s1 = s2
    // s1 = s2;
    // cout<<"s1 = "<<s1<<endl;

    // 2. s1 = s1 + s2
    // s1 = "Hello";
    // cout<<"Hasil : "<<s1+s2<<endl;

    // 3. s1.lenght() menghitung panjang kalimat
    // cout << s1.length()<<endl;
    // cout << (s1+ s2).length()<<endl;

    // 4. s1substr(n,m), library untuk mengambil sebagian string dari indeks ke n dengan panjang ke m karakter.
    // cout<<s1.substr(2,4)<<endl;
    // cout<<(s1 + s2).substr(5,3)<<endl;

    //Operator sizeof() untuk tau ukuraan suatu variabel dari byte
    // int angka = 10;
    // cout << sizeof(angka);

    // int nilai[] = {10,20,30,40,50}; //hasil nya 20 karena int 4 byte 
    // cout << sizeof(nilai);

    // string s = "nia";
    // // cout << sizeof(s);
    // cout << s.length();

    // string nama_karyawan[]={"papa","mama","kaka","abang","nenek"};
    // int n = sizeof(nama_karyawan) / sizeof(string);
    // cout << n <<endl;

    //aray labrary
    array<float,5> nilai = {87.2, 45.6, 119.9, 56.0, 12.8};
    cout << "Nilai : ";
    for (int i = 0; i < nilai.size(); i++){
    }
}

