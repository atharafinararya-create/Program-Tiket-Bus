

#include <iostream>
using namespace std;
int main() {
    int pilihan,jumlah;
    int harga;
    string tujuan;
    cout<<"|=====================================|"<<endl;
    cout<<"|            Program Tiket Bus        |"<<endl;
    cout<<"|=====================================|"<<endl;
    cout<<"1. Malang - Surabaya : 35.000"<<endl;
    cout<<"2. Malang - Pasuruan : 20.000"<<endl;
    cout<<"3. Malang - Jombang : 25.000"<<endl;
    cout<<"======================================="<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"Pilih Tujuan (1-3) : ";
    cin>>pilihan ;
    switch (pilihan) {
        case 1 :
            tujuan = "Malang - Surabaya";
            harga = 35000;
            break;
        case 2 :
            tujuan = "Malang - Pasuruan";
            harga = 20000;
            break;
        case 3 :
            tujuan = "Malang - Jombang";
            harga = 25000;
            break;
        default :
            cout<<"Pilihan Tidak Tersedia "<<endl;
    }
    cout<<"Jumlah Penumpang Bus : ";
    cin>>jumlah;
    if (jumlah<0) {
        cout<<"Jumlah Penumpang Harus Lebih Dari 0";
    }
    cout<<""<<endl;
    cout<<"|=========================================|"<<endl;
    cout<<"|                 Tiket Bus               |"<<endl;
    cout<<"|_________________________________________|"<<endl;
    cout<<"Tujuan                : ";
    cout<<tujuan<<endl;
    cout<<"Harga Per Tiket       : Rp.";
    cout<<harga<<endl;
    cout<<"Jumlah Penumpang      : ";
    cout<<jumlah<<endl;
    pilihan = jumlah * harga ;
    cout<<"Total Bayar Tiket Bus : Rp.";
    cout<<pilihan<<endl;
    cout<<"|==========================================|"<<endl;
    cout<<"|   Terimakasih Sudah Memesan Bus Kami     |"<<endl;
    cout<<"|------------------------------------------|"<<endl;
    
    
    return 0;
}
