#include <iostream>
using namespace std;

void penjumlahan(int a, int b) {
    cout << a + b << endl;
}

void penjumlahanPointer (int *a, int *b){
    *a += *b;
    cout << *a << endl;
}

void dooblevalue (int *a){
    *a *=2;
    cout << *a <<endl;
}

int main(){
    system ("CLS");

    //Deklarasi Pointer, variabel yang menyimpan dari alamat variabel lain.
    // int number = 35;
    // int *pointer_number = &number;

    // cout << "Isi Variabel number= "<<number<<endl;
    // cout <<"Alamat memori variabel number = "<<&number<<endl;
    // cout << "Isi Variabel Pointer_Number = "<<pointer_number<<endl;
    // cout << "isi Vraiabel yang di tunjuk oleh pointer_number = "<<*pointer_number<<endl;
    // cout << "Alamat memori variabel pointer_number = "<<&pointer_number<<endl;
    // cout << endl;

    // Pointer Operation
    // *pointer_number = 25;
    // cout << "Isi Variabel number= "<<number<<endl;
    // cout <<"Alamat memori variabel number = "<<&number<<endl;
    // cout << "Isi Variabel Pointer_Number = "<<pointer_number<<endl;
    // cout << "isi Vraiabel yang di tunjuk oleh pointer_number = "<<*pointer_number<<endl;
    // cout << "Alamat memori variabel pointer_number = "<<&pointer_number<<endl;
    // cout << endl;

    // Pointer in Array, untuk mengakses elemen dalam array.
    // int num[] = {1, 2, 3, 4, 5};
    // int *pointer_num = num; //maksudnya secara default akan menunjuk ke index ke 0
    // cout << "Isi Variabel num= "<<num[0]<<endl;
    // cout << "Alamat memori variabel num = "<<&num[3]<<endl;
    // cout << "Isi Variabel Pointer_Num = "<<pointer_num<<endl;
    // cout << "isi Vraiabel yang di tunjuk oleh pointer_num = "<<*pointer_num<<endl;
    // cout << "Alamat memori variabel pointer_num = "<<&pointer_num<<endl;
    // cout << endl;

    // *pointer_num += 5; //6
    // cout << "Isi Variabel num= "<<num[0]<<endl;
    // cout << "Alamat memori variabel num = "<<&num[3]<<endl;
    // cout << "Isi Variabel Pointer_Num = "<<pointer_num<<endl;
    // cout << "isi Vraiabel yang di tunjuk oleh pointer_num = "<<*pointer_num<<endl;
    // cout << "Alamat memori variabel pointer_num = "<<&pointer_num<<endl;
    // cout << endl;

    // pointer int parameter, digunakan sebagai parameter fungsi untuk mengubah nilai variabel di luar fungsi. 
    // int num1 = 5;
    // int num2 = 7;
    // penjumlahan(num1,num2);
    // cout << num1 << endl;
    // cout << num2 << endl;
    // penjumlahanPointer(&num1, &num2);
    // cout << num1 << endl;
    // cout << num2 << endl;

    // pointer in pointer, yaitu sebuah pointer menyimpan alamat dari pointer lain.
    // int score = 4;
    // int *pointer_score = &score;
    // int **ptr_pointer_score = &pointer_score;

    // cout << "Isi Variabel score " << score<< " Dan Alamat Memory nya " <<&score <<endl;
    // cout << "Isi dari Variabel Pointer_score " << pointer_score << " Isi variababel yang di tunjuk oleh pointer score " << *pointer_score << " alamat memory pointer_score " << &pointer_score<<endl;
    // cout << "Isi dari Variabel Pointer_score " << pointer_score << " Isi variababel yang di tunjuk oleh pointer score " << **ptr_pointer_score << " alamat memory ptr_pointer_score " << &ptr_pointer_score<<endl;

    // Dynamic Pointer, penggunaan pointer untuk mengalokasikan dan mengelola memori secara dinamis saat program berjalan. 
//     int *ptr = new int;
//     *ptr = 30;
//     cout << "Isi Variabel ptr = " <<*ptr<<" alamat variabel ptr = "<<&ptr<<endl;

//     delete ptr; //dialokasikan
//     cout << "Isi Variabel ptr = " <<*ptr<<" alamat variabel ptr = "<<&ptr<<endl;

// contoh
// int n;
// cout << "Masukan sebuah angka = ";
// cin >> n;

// dooblevalue(&n);
// cout<< "nilai angka setelah di kali 2 " <<n<<endl;
}
