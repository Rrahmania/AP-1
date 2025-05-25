#include <iostream>
using namespace std;

int main(){
    int a, b;

    system("CLS");

    //assingment operator (=), yaitu operator untuk menetapkan nilai dalam variabel
    a = 3;
    b = 5;

    //arimatical operator(-,+,/, *, %), yaitu untuk operator dalam matematika
    int tambah = a + b;
    int kurang = a - b;
    int kali = a * b;
    float bagi = (float)a / (float)b; //type casting = mengubah tipe data dari sebuah variabel
    int modulo = a % b;

    cout<<"Hasil Penjumlahan : "<< tambah<<endl;
    cout<<"Hasil Pengurangan : "<< kurang<<endl;
    cout<<"Hasil Perkalian : "<< kali<<endl;
    cout<<"Hasil Pembagian : "<< bagi<<endl;
    cout<<"Hasil Modulo : "<< modulo<<endl; 

    //relational operator, untuk menentukan membandingkan 2 nilai dan menentukan hubungan antara keduanya
    cout<<(a==b) <<endl;
    cout<<(a>b) <<endl;
    cout<<(a>=b) <<endl;
    cout<<(a<b) <<endl;
    cout<<(a<=b) <<endl;
    cout<<(a!=b) <<endl; 

    //Logicial Operator (&&,||,!), yaitu untuk menggabungkan atau membandingkan kondisi dalam pernyataan. output yang di hasilkan true / false.
    cout << (true && true)<<endl;
    cout << (true && false)<<endl;
    cout << (false && true)<<endl;
    cout << (false && false)<<endl; 

    cout << (true || true)<<endl;
    cout << (true || false)<<endl;
    cout << (false || true)<<endl;
    cout << (false || false)<<endl; 

    cout << (!true)<<endl;
    cout << (!false)<<endl;

    //Bitwase operator(&,|,~,<<,>>) --> Operator biner, digunakan untuk melakukan operasi langsung pada repesentasi biner dari angka.
    cout<< (5 & 7 )<<endl;
    cout<< (5 | 7 )<<endl;
    cout<< (5 ^ 7 )<<endl;
    cout<< (~7)<<endl;
    cout<< (7 << 2 )<<endl;
    cout<< (7 >> 2 )<<endl;

    // Shorthand, merujuk pada cara penulisan kode yang lebih singkat dan efisien.
    a += 7; // a = a + 7
    cout<< a <<endl;

    a -= 7; // a = a - 7
    cout<< a <<endl;

    a*=7; // a = a * 7
    cout<< a <<endl;

    a/=7; // a = a / 7
    cout<< a <<endl; 

    //increment and decrement, yaitu di gunakan untuk menambah atau mengurangi nilai variabel.
    //Pre Increment (Penambahan secara langsung), operator yang menambahkan nilai sebelum digunakan dalam ekspresi.
    cout << a << endl;
    cout << ++a <<endl;

    cout << b << endl;
    cout << ++b<< endl;

    //post Increment, yaitu operator yang meningkatkan nilai variabel setelah digunakan dalam ekspresi.
    cout << a << endl;
    cout << a++ <<endl;
    cout << a << endl;

    cout << b << endl;
    cout << b++ <<endl;
    cout << b << endl;*/

    //Pre Decrement (Pengurangan secara langsung), yaitu  operator yang mengurangi nilai variabel sebelum digunakan dalam ekspresi.
    cout << a << endl;
    cout << --a <<endl;

    cout << b << endl;
    cout << --b<< endl;

    //post decrement, yaitu  operator yang mengurangi nilai variabel setelah digunakan dalam ekspresi.
    cout << a << endl;
    cout << a-- <<endl;
    cout << a << endl;

    cout << b << endl;
    cout << b-- <<endl;
    cout << b << endl;
}
