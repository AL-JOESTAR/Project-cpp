#include <iostream>

using namespace std;

int main()
{
    int jenis;
    int tiket;
    int harga;

  int diskon;
int total;
string tipe;

  cout <<"JENIS JENIS TIKET YANG TERSEDIA : " << endl;
  cout << "1. EKONOMI : Rp. 100.000" <<endl << "2. BISNIS : Rp. 200.000" <<endl << "3. EKSEKUTIF : Rp. 300.000";
  cout << endl << endl;

  cout << "masukan jenis tiket kereta : ";
  cin >> jenis;

  cout <<"masukan jumlah tiket : ";
  cin >> tiket;

  switch(jenis){
  case 1:
    tipe = "anda memilih kelas ekonomi";
    harga = 100000 * tiket;
    break;

    case 2:
    tipe = "anda  memilih kelas bisnis";
    harga = 200000 * tiket;
    break;

    case 3:
    cout << "anda memilih kelas bisnis";
    harga = 300000 * tiket;
    break;
  
  default:
  cout <<"pilihan tidak tersedia";
    break;
  }
  
  if(harga >500000){
   diskon = harga * 10/100;
 total =  harga - diskon;
  }

  else if (harga > 300000){
    diskon = harga * 5/100;
    total = harga - diskon;
  }
  else if (harga > 200000 ){
    diskon = harga * 2/100;
   total =  harga - diskon;
  }
  cout << endl << tipe << endl;
  cout << "maka total harga tiket : Rp. "<< total;
}
