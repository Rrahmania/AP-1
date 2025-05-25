#include <iostream>
using namespace std;

int main(){
    string kalimat;
    int i;

    cout<<"Masukan Kalimat : ";
    getline(cin, kalimat);

    // mengubah huruf menjadi kafital.
    for(i = 0; i < kalimat.length (); i++){
        kalimat[i] = toupper(kalimat[i]);
    }
    cout<< "Kalimat Dalam Huruf Kafital : " << kalimat << endl;

    return 0;
}
