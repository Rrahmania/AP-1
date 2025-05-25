#include <iostream> //header untuk c++, di gunakan untuk operasi output standar cin untuk memasukan inputan cout untuk menampilkan output.
#include <conio.h> //untuk getche() dan getch(), untuk membaca input karakter dari keyboard tanpa perlu menekan Enter. 
using namespace std; //untuk menghindari penggunaan std trlalu banyak
int main(){
    string nama;
    char kom,jeniskelamin;
    int nim;
    float ip;
    cout<< "Hello World!" <<endl;

    cout<<"masukan nama : ";
    
   // cin>>nama;, digunakan untuk mengambil input dari pengguna melalui keyboard.
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
    putchar(jeniskelamin); //untuk menampilkan karakter jenis kelamin, untuk mencetak satu karakter kelayar.

    getch(); //karakter yang di ketik tidak ditampilkan di layar
}
