#include<iostream>
using namespace std;
int main(){
    float kodeSusu, jumlah, harga, total;
    string ukuranSusu;

    cout << "   Daftar harga produk  \n";
    cout << " |-------------|---------------|---------------|------------------|\n ";
    cout << " |  Kode Susu  |  Nama Produk  |   Ukuran      |   Harga          |\n ";
    cout << " |-------------|---------------|---------------|------------------|\n ";
    cout << " |  1          |  Dancow       |   B = Besar   |   Rp. 10.000,-   |\n ";
    cout << " |             |               |   S = Sedang  |   Rp. 4.250,-    |\n ";
    cout << " |             |               |   K = Kecil   |   Rp. 2.100,-    |\n ";
    cout << " |-------------|---------------|---------------|------------------|\n ";
    cout << " |  2          |  Indomilk     |   B = Besar   |   Rp. 8.500,-    |\n ";
    cout << " |             |               |   S = Sedang  |   Rp. 4.000,-    |\n ";
    cout << " |             |               |   K = Kecil   |   Rp. 2.025,-    |\n ";
    cout << " |-------------|---------------|---------------|------------------|\n ";
    cout << " |  3          |  Sustacal     |   B = Besar   |   Rp. 17.000,-   |\n ";
    cout << " |             |               |   S = Sedang  |   Rp. 14.500,-   |\n ";
    cout << " |             |               |   K = Kecil   |   Rp. 8.300,-    |\n ";
    cout << " |-------------|---------------|---------------|------------------|\n ";

    cout << " Masukkan Kode Susu (1-3): ";
    cin >> kodeSusu;
    cout << " Masukkan Jumlah Pembelian: ";
    cin >> jumlah;
    cout << " Masukkan Ukuran (B/S/K): ";
    cin >> ukuranSusu;

    if (kodeSusu==1){
        if (ukuranSusu=="B"||ukuranSusu=="b"){
            cout << " ================================\n ";
            cout << " Susu Dancow\n ";
            harga = 10000;
            total = harga*jumlah;
            cout << " Harga Susu: Rp. "<<harga<<endl;
            cout << " Jumlah Pembelian Rp. "<<total<<endl;
            cout << " ================================\n ";
        }
        else if (ukuranSusu=="S"||ukuranSusu=="s"){
            cout << " ================================\n ";
            cout << " Susu Dancow\n ";
            harga = 4250;
            total = harga*jumlah;
            cout << " Harga Susu: Rp. "<<harga<<endl;
            cout << " Jumlah Pembelian Rp. "<<total<<endl;
            cout << " ================================\n ";
        }
        else if (ukuranSusu=="K"||ukuranSusu=="k"){
            cout << " ================================\n ";
            cout << " Susu Dancow\n ";
            harga = 2100;
            total = harga*jumlah;
            cout << " Harga Susu: Rp. " << harga << endl;
            cout << "Jumlah Pembelian Rp. " << total << endl;
            cout << " ================================\n ";
    }
    else{
        cout << " Ukuran susu tidak sesuai ";
        }
    }
    else if (kodeSusu==2){
        if (ukuranSusu=="B"||ukuranSusu=="b"){
            cout << " ================================\n ";
            cout << " Susu Indomilk\n ";
            harga = 8500;
            total = harga*jumlah;
            cout << " Harga Susu: Rp. "<<harga<<endl;
            cout << " Jumlah Pembelian Rp. "<<total<<endl;
            cout << " ================================\n ";
        }
        else if (ukuranSusu=="S"||ukuranSusu=="s"){
            cout << " ================================\n ";
            cout << " Susu Indomilk\n ";
            harga = 4000;
            total = harga*jumlah;
            cout << " Harga Susu: Rp. "<<harga<<endl;
            cout << " Jumlah Pembelian Rp. "<<total<<endl;
            cout << " ================================\n ";
        }
        else if (ukuranSusu=="K"||ukuranSusu=="k"){
            cout << " ================================\n ";
            cout << " Susu Indomilk\n ";
            harga = 2025;
            total = harga*jumlah;
            cout << " Harga Susu: Rp. "<<harga<<endl;
            cout << " Jumlah Pembelian Rp. "<<total<<endl;
            cout << " ================================\n ";
    }
    else{
        cout << " Ukuran susu tidak sesuai ";
        }
    }
    else if (kodeSusu==3){
        if (ukuranSusu=="B"||ukuranSusu=="b"){
            cout << " ================================\n ";
            cout << " Susu Sustacal\n";
            harga = 17000;
            total = harga*jumlah;
            cout << " Harga Susu: Rp. "<<harga<<endl;
            cout << " Jumlah Pembelian Rp. "<<total<<endl;
            cout << " ================================\n ";
        }
        else if (ukuranSusu=="S"||ukuranSusu=="s"){
            cout << " ================================\n ";
            cout << " Susu Sustacal\n ";
            harga = 14500;
            total = harga*jumlah;
            cout << " Harga Susu: Rp. "<<harga<<endl;
            cout << " Jumlah Pembelian Rp. "<<total<<endl;
            cout << " ================================\n ";
        }
        else if (ukuranSusu=="K"||ukuranSusu=="k"){
            cout << " ================================\n ";
            cout << " Susu Sustacal\n ";
            harga = 8300;
            total = harga*jumlah;
            cout << " Harga Susu: Rp. "<<harga<<endl;
            cout << " Jumlah Pembelian Rp. "<<total<<endl;
            cout << " ================================\n ";
    }
    else{
        cout << " Ukuran susu tidak sesuai ";
        }
    }
    else{
        cout<<"=====================================\n";
        
        cout<<"|| MAAF KODE SUSU TIDAK SESUAI!!!! ||\n";
        
        cout<<"=====================================\n";
    }
    return 0;
}