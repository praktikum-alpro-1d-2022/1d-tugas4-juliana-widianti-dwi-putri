#include <iostream>
using namespace std;
int main(){
    int angka;
    cout << " Masukan Tahun: ";
    cin >> angka;
    if (angka % 4 == 0){
        cout << " TAHUN KABISAT ";
    }else{
        cout << " BUKAN TAHUN KABISAT ";
    }
    return 0;
}
