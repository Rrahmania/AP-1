#include <iostream>
using namespace std;

int main() {
    int r;
    float volume, luas;
    const float pi = 3.14;

    cout << "Masukkan jari-jari bola: ";
    cin >> r;

    volume = (4.0 / 3.0) * pi * r * r * r;
    luas = 4 * pi * r * r; 

    cout << "Volume bola: " << volume << endl;
    cout << "Luas permukaan bola: " << luas << endl;

    return 0;
}
