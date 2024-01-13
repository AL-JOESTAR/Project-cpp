#include<iostream>
using namespace std;

const double phi = 3.14;

int luaspersegi(int panjang){
return panjang*panjang;
}

double luaslingkaran (int jari){ 
return phi * (jari * jari);
}

int luaspersegipanjang(int panjangp ,int lebar ){
return panjangp * lebar;
}


int main()
{
int panjang;
string pilih;
int jari;
int lebar;
int panjangp;

cout <<"mau menghitung luas apa : ";
cin >> pilih;

if (pilih == "persegi"){
    cout <<"masukan panjang sisi : ";
    cin >> panjang;
    
    cout <<"maka luas persegi panjang = "<< luaspersegi(panjang);
    }   

 else if (pilih == "lingkaran"){
    cout << "masukan jari jari = ";
    cin >> jari;
    
    cout << "maka luas lingkaran = " << luaslingkaran(jari);
    }
    
else if(pilih =="persegipanjang")
    {
    cout <<"masukan panjangnya : ";
    cin >> panjangp;
    
    cout <<"masukan lebarnya : ";
    cin >> lebar;
    
    cout <<"maka luas persegi panjang = " << luaspersegipanjang(panjangp, lebar);
    }
else{
    cout <<"maaf pilihan tidak tersedia";
    }
    
}
