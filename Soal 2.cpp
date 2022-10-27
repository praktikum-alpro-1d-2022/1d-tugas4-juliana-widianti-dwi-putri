#include <iostream>
using namespace std;
int main(){
   string username,pasword;

   cout <<  " ========== WELCOME ========== \n";
   cout << " Masukan Username: ";
   cin >> username;
   cout << " Masukan Pasword: ";
   cin >> pasword;

   if (username=="Juliana"){
       if (pasword=="Jull"){
            cout << " SELAMAT DATANG MRS.JULIANA ";
        }
        else if(pasword!="Jull"){
            cout << " Maaf Pasword Salah, Silakan coba lagi";
        }
    }
    else if(username!="Juliana"){
            cout << " Username Salah,Silakan coba lagi";
        }
    else{
            cout << " ANDA TIDAK TERDAFTAR ";
    }
    return 0;
}
