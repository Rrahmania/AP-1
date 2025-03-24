#include <iostream>
using namespace std;

int main(){
    string kalimat;
    int i;

    cout << "Masukan Kalimat : ";
    getline(cin, kalimat);

    // Mengubah huruf vokal menjadi kapital
    for(i = 0; i < kalimat.length(); i++) {
        if(kalimat[i] == 'a' || kalimat[i] == 'e' || kalimat[i] == 'i' || kalimat[i] == 'o' || kalimat[i] == 'u') {
            kalimat[i] = toupper(kalimat[i]);
        }
    }

    cout << "Kalimat Dengan Huruf Vokal Kapital : " << kalimat << endl;

    return 0;
}