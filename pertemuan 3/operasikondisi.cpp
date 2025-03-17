#include <iostream>
using namespace std;

int main() {
    int nilai;

    system("CLS");

    cout<<"Masukan Nilai : ";
    cin>>nilai;

    //if statment
   /* if( nilai <= 65) {
        cout<<"Anda Tidak Lulus"<<endl;
    }*/

    //if else statment
   /* if (nilai <= 65) {
        cout <<"Anda Tidak Lulus" <<edl;
    } else {
        cout<<"Anda Lulus" <<endl;
    }*/

    //if else if statment
   /* if (nilai == 100) {
        cout<<"Anda Kece"<<endl;
    } else (nilai <= 65) {
        cout<<"anda tidak lulus" <<endl;
    } else {
        cout<<"anda lulus"endl;
    }*/

    //nested if
   /* if (nilai <= 65) {
        cout<<"Anda Tidak Lulus" <<endl;
    } else {
        if (nilai == 100) {
            cout<<"Anda Lulus dan Anda Kece"<<endl;
        } else {
            cout <<"Anda Lulus"<<endl;
        }
    }*/

    //switch case
    // switch (nilai)
    // {
    // case 1:
    //     cout<<"Senin"<<endl;
    //     break;
    // case 2:
    //     cout<<"Selasa"<<endl;
    //     break;
    // case 3:
    //     cout<<"Rabu"<<endl;
    //     break;
    // case 4:
    //     cout<<"Kamis"<<endl;
    //     break;
    // case 5:
    //     cout<<"Jumat"<<endl;
    //     break;
    // case 6:
    //     cout<<"Sabtu"<<endl;
    //     break;
    // case 7:
    //     cout<<"Minggu"<<endl;
    //     break;
    // default: //apapun yang di luar dari case di beritahu
    //     cout <<"Inputan Tidak Valid"<<endl;
    //     break;
    // }

    //switch range
    // switch(nilai){
    //     case 85 ... 100 : cout <<"A"<<endl; break;
    //     case 80 ... 84  : cout <<"B+"<<endl; break;
    //     case 75 ... 79  : cout <<"B"<<endl; break;
    //     case 70 ... 74  : cout <<"C++"<<endl; break;
    //     case 65 ... 69  : cout <<"C"<<endl; break;
    //     case 60 ... 64  : cout <<"D"<<endl; break;
    //     default : cout <<"E"<<endl; break;
    // }

    //ternary Operator
    // if (nilai % 2 == 0) {
    //     cout<< "Genap nih" <<endl;
    // } else {
    //     cout <<"Ganjil sih" <<endl;
    // }
    string chekNum = (nilai % 2 == 0) ? "Genap" : "Ganjil";
    cout <<nilai <<"tuh Bilangan nya" <<chekNum<<"sih"<<endl;
}