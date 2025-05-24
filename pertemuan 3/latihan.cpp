#include <iostream>
#include <string>
using namespace std;

int main(){
    int nilai;
    system("CLS");

    cout << "Masukan Nilai : ";
    cin >> nilai;

    if (nilai % 10 == 0){
        cout << "Nilai Anda Kelipatan 10" << endl;
    }
    else if (nilai % 5 == 0) {
        cout << "Nilai Anda Kelipatan 5" << endl;
    }
    else {
        cout << "Nilai Anda bukan Kelipatan 5 dan 10" << endl;
    }

    return 0;
}
