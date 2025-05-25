#include <iostream>
using namespace std;

class ContohAkses {
    private: //Hanya dapat diakses dari dalam class itu sendiri.
    int privatevar;

    protected: //Mirip dengan private, tetapi bisa diakses oleh class turunan.
    int protectedvar;

    public: //Dapat diakses dari mana saja, termasuk dari luar class.
    int pulblicvar;

    // constructor ngeset nilai dari awal
    ContohAkses(){
        privatevar = 1;
        protectedvar = 2;
        pulblicvar = 3;

    }
    void tampilkanSemua(){
        cout<<"Akses dari dalam class : "<<endl;
        cout<<privatevar<<endl;
        cout<<protectedvar<<endl;
        cout<<pulblicvar<<endl;
    }

};

class turunan : public ContohAkses{
    public : 
    void aksesProtected(){
        cout << protectedvar <<endl;
        cout << pulblicvar <<endl;
        cout << privatevar <<endl;
    }

};

int main(){
    ContohAkses obj;
    obj.tampilkanSemua(); //Memanggil fungsi untuk menampilkan semua variabel dalam class.

    cout<< "\nAkses dari luar class : "<<endl;
    // cout<<obj.privatevar<< endl;
    // cout<<obj.protectedvar<<endl;
    cout<<obj.pulblicvar<<endl;

    cout <<"\n Akses dari Turunan "<<endl;
    turunan tur;
    tur.aksesProtected(); // Memanggil fungsi dalam class turunan untuk mengakses protectedvar
}
