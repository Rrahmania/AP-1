#include <iostream>
using namespace std;
int main(){
    int nilai;
    int *petunjuk;

    nilai = 28;
    petunjuk = &nilai;

    cout<<"Ini adalah isi petunjuk = "<<petunjuk<<endl;
    cout<<"isi petunjuk bintang = "<<*petunjuk<<endl;

    return 0;

}