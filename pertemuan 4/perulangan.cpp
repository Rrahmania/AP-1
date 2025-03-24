#include <iostream>
using namespace std;

int main(){
    // goto label (intruksi yang bisa bikin loncat / tujuan untuk lompat)
    // Hello Word, Fasilkom TI, Ilmu Komputer, IKLC

    // a:
    // cout<<"Hello Word"<<endl;
    // goto d;
    // b:
    // cout<<"Fasilkom TI"<<endl;
    // return 0;
    // c:
    // cout<<"Ilmu Komputer"<<endl;
    // goto b;
    // d:
    // cout<<"IKLC"<<endl;
    // goto c;

    //menampilkan bilangan genap 10 -> 2 dengan goto
    // int i = 10;
    // genap:
    // if (i % 2 == 0) {
    //     cout<<i<<endl;
    // } i--;
    // if (i >= 2) {
    //     goto genap;
    // }

    //Statment while (Yang di cek di awal hingga false) harus terpenuhi baru jalan
   /* int i = 1;
    while( i <= 10) {
        if(i % 2 == 0) {
            cout<<i<<" ";
        } i++;
    }*/

    //Statment Do-While(Perulangan nya akan berjalan sekali meski salah)
    /*int i = 1;
    do {
        cout << i <<endl;
    } while (i <= 0);*/

    // Statment For
    // for (inisialisasi, kondisi, increase) 
    // for (int i = 1; i <= 10; i+=2) { //i + 2 
    //     cout<<"Hello World" << endl;

    // }

    //nested for (ada for dalam for)
    // ***** 5 x 5
    // for(int i = 1; i<= 5; i++){ //untuk baris
    //     for (int j = 1; j <= 5; j++){ //untuk menanampikan bintang
    //         cout<<" * "; 
    //     }
    //     cout<<endl;
    // }

    //segitiga siku - siku 
    // for(int i = 1; i <=5; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout<<" *";
    //     }
    //     cout<<endl;
    // }

    


}