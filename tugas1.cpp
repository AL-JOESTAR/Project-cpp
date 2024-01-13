#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    
    cout << "masukan nilai a : ";
    cin >> a;
    
    cout << "masukan nilai b : ";
    cin >> b;
    
    if (a % 2 == 1 && b % 2 == 0){
    cout << "nilai a = " << a <<" dan "<< "nilai b = " << b << endl << "nilai ganjil genap";}
    else{
    cout <<"nilai bukan ganjil genap";
    }
    
        return 0;
}