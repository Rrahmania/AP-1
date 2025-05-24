#include <iostream>

using namespace std;

int main() {
    int nilai[3], *petunjuk;
    nilai[0] = 125;
    nilai[1] = 345;
    nilai[2] = 750;

    petunjuk = &nilai[0];

    cout << "Nilai petunjuk " << petunjuk << " ada di sini " << *petunjuk << endl;
    cout << "Nilai petunjuk " << petunjuk+1 << " ada di sini " << *(petunjuk+1) << endl;
    cout << "Nilai petunjuk " << petunjuk+2 << " ada di sini " << *(petunjuk+2) << endl;

    return 0;
}