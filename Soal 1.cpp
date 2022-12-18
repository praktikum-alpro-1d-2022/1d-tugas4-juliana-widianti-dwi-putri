#include <iostream>
using namespace std;
int main() {
    int bilangan;
    
    cout << "Masukan Bilangan: ";
    cin >> bilangan;
    if (bilangan % 2 == 0){
        cout << "  MERUPAKAN BILANGAN GENAP  ";
    }else{
        cout << "  MERUPAKAN BILANGAN GANJIL  ";
    }
    return 0;
}