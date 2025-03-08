#include <iostream> //header untuk c++
#include <conio.h> //untuk getche() dan getch()
using namespace std; //untuk menghindari penggunaan std trlalu banyak
int main(){
    string nama;
    char kom,jeniskelamin;
    int nim;
    float ip;
    cout<< "Hello World!" <<endl;

    cout<<"masukan nama : ";
    
   // cin>>nama;
   getline(cin, nama); //agar karakter spasi bisa terbaca

   cout<<"masukan kom kamu : ";
   cin>>kom;

   cout<<"Masukan Nim kamu : ";
   cin>>nim;

   cout<<"masukan IP kamu : ";
   cin>>ip;

   cout <<"Masukan Jenis Kelamin (L/P) : ";
   jeniskelamin = getche(); //agar karakter langsung tampil jadi gak perlu tekan enter


    /*untuk output*/
    cout << "\n" << nama <<endl;
    cout <<kom <<endl;
    cout <<nim <<endl;
    cout <<ip <<endl;
    putchar(jeniskelamin); //untuk menampilkan karakter jenis kelamin

    getch(); //karakter yang di ketik tidak ditampilkan
}