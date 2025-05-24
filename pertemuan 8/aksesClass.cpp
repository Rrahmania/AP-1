#include <iostream>
using namespace std;

class ContohAkses {
    private:
    int privatevar;

    protected:
    int protectedvar;

    public:
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
    //     cout << privatevar <<endl;
    }

};

int main(){
    ContohAkses obj;
    obj.tampilkanSemua();

    cout<< "\nAkses dari luar class : "<<endl;
    // cout<<obj.privatevar<< endl;
    // cout<<obj.protectedvar<<endl;
    cout<<obj.pulblicvar<<endl;

    cout <<"\n Akses dari Turunan "<<endl;
    turunan tur;
    tur.aksesProtected();
   

}