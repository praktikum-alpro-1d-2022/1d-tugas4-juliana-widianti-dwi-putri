#include<iostream>
using namespace std;
int main(){
    int pilihan;

    cout << "  Menu Restaurant Mc'Yahud  \n";
    cout << " ==========================================\n ";
    cout << " 1. Nasi Goreng Informatika   Rp. 5.000,-  \n ";
    cout << " 2. Nasi Soto Ayam Internet   Rp. 7.000,-  \n ";
    cout << " 3. Gado-gado Disket          Rp. 4.500,-  \n ";
    cout << " 4. Bubur Ayam LAN            Rp. 4.000,-  \n ";
    cout << " ==========================================\n ";

    cout << " Masukkan Pilihan Menu yang Anda inginkan:  ";
    cin >> pilihan;

    if (pilihan==1){

        cout << " Pilihan No. 1 adalah Nasi Goreng Informatika Rp. 5.000,- ";
    }
    else if (pilihan==2){

        cout << " Pilihan No. 2 adalah Nasi Soto Ayam Internet Rp. 7.000,- ";
    }
    else if (pilihan==3){

        cout << " Pilihan No. 3 adalah Gado-gado Disket Rp. 4.500,- ";
    }
    else if (pilihan==4){

        cout << " Pilihan No. 4 adalah Bubur Ayam LAN Rp. 4.000,- ";
    }
    else{
        cout << " Maaf Pilihan Anda Tidak Terdapat Dalam Menu ";
    }
    return 0;
}
