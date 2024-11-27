#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //KARAKTER DAN OPSI
    int karakter;
    int opsi;
    int opsi2;
    int damage = 0;
    int senjata;
    int uang = 500;
    //NYAWA
    int nyawa = 100; //(MONSTER)
    int nyawak =100; //(PEMAIN)
    //BELI PEDANG
    int bs1;
    int bs2;
    int bs3;
    //UANG
    int sisa_uang;
    int total =0;
    //JENIS SENJATA 
    string js;
    
    pilih:
    cout << "===================================" <<endl;
    cout << "#         PILIH KARAKTER          #" << endl;
    cout << "===================================" <<endl;
    cout << "# 1. KESATRIA                     #" << endl;
    cout << "# 2. PEMANAH                      #" << endl;
    cout << "# 3. PENYIHIR                     #" << endl;
    cout << "===================================" << endl;

    cout << "SILAHKAN PILIH KARAKTER : ";
    cin >> karakter;

    cout << endl << endl;


    if (karakter == 1)
    {   
        cout << "==========================" << endl;
        cout << "#      KARAKTER ANDA     #" << endl;
        cout << "==========================" << endl;
        cout << "#        KESATRIA        #" << endl;
        cout << "==========================";
    }
    else if (karakter == 2)
    {   
        cout << "==========================" << endl;
        cout << "#      KARAKTER ANDA     #" << endl;
        cout << "==========================" << endl;
        cout << "#        PEMANAH         #" <<endl;
        cout << "==========================";
        nyawak += 10;
        damage -= 5;
    }
    else if (karakter == 3)
    {
        cout << "==========================" << endl;
        cout << "#      KARAKTER ANDA     #" << endl;
        cout << "==========================" << endl;
        cout << "#        PENYIHIR        #" << endl;
        cout << "==========================";
        nyawak -= 30;
        damage += 15;
    }
    else
    {
        cout << "MAAF KARAKTER TIDAK TERSEDIA";
        goto keluar;
    }

    cout << endl
         << endl;
    
    //LOOPING DO WHILE     
    do {
    
    //UNTUK RANDOM ANGKA
    int rser;
    srand(time(0));
    rser = rand() % 15 + 1;
    
    int rheal;
    rheal = rand () %10 + 1;
    
    //serangan monster
    int sermon;
    sermon = rand () %15 +1;
    
    //damage total
    int damage_total = rser + damage;
    
    //damage memulihkan
    int damage_heal = rand() %5+1;

            cout << "========================" << endl;
            cout << "# PILIH OPSI :         #" << endl;
            cout << "#======================#" << endl;
            cout << "# 1. SERANG            #" << endl;
            cout << "#======================#" << endl;
            cout << "# 2. MEMULIHKAN        #" << endl;
            cout << "#======================#" << endl;
            cout << "# 3. BELI SENJATA      #" << endl;
            cout << "#======================#" << endl;
            cout << "# 4. GANTI KARAKTER    #" << endl;
            cout << "#======================#" << endl;
            cout << "# 5. KELUAR            #" << endl;
            cout << "========================" << endl;
            cout << "SILAHKAN PILIH OPSI : ";
            cin >> opsi;
            cout << "========================" << endl;
            cout <<endl;



        switch (opsi)
        {
        case 1:
            nyawa -= damage_total;
            nyawak -= sermon;
            cout << "=======================================" << endl;
            cout << "#                SERANG               #" << endl;
            cout << "=======================================" << endl;
            cout << "ANDA MENYERANG MONSTER DENGAN "<< damage_total << " DAMAGE"  << endl ;
            cout << "SISA NYAWA MONSTER " << nyawa <<endl;
            cout << "=======================================" << endl;
            cout << "MONSTER MENYERANG ANDA DENGAN " << sermon << " DAMAGE" << endl ;
            cout << "SISA NYAWA ANDA " << nyawak  <<endl;
            cout << "=======================================" << endl << endl;
            //SERANG
            if(nyawa <= 0){
                cout << "SELAMAT ANDA BERHASIL MENGALAHKAN MONSTER" << endl << endl;
                uang += 100;
                goto keluar;
            }
            else if(nyawak <= 0){
                cout << "KAMU DIKAHLAHKAN OLEH MONSTER" << endl << "JANAGAN MENYERAH SILAHKAN COBA LAGI" << endl << endl;
                goto keluar;
            }
            else if(nyawak <= 0 && nyawa <= 0){
                cout << "PETEMPURAN SERI";
                goto keluar;
            }
            break;

            case 2:
            //MEMULIHKAN
                nyawak += rheal;
                nyawak -= sermon;
                nyawa -= damage_heal;
                cout << "=======================================" << endl;
                cout << "#       MENYERANG & MEMULIHKAN        #" << endl;
                cout << "=======================================" << endl;
                cout << "ANDA MENYERANG MONSTER DENGAN "<< damage_heal << " DAMAGE " << endl;
                cout << "SISA NYAWA MONSTER " << nyawa <<endl;
                cout << "=======================================" << endl;
                cout << "MOSTER MENYERANG ANDA DENGAN " << sermon << " DAMAGE" <<endl;
                cout << "DAN ANDA MEMULIHKAN "<< rheal <<" HP ANDA"  << endl <<"NYAWA ANDA TERSISA "<< nyawak <<endl;
                cout << "=======================================" << endl << endl;
                
            if(nyawa <= 0){
                cout << "SELAMAT ANDA BERHASIL MENGALAHKAN MONSTER" << endl << endl;
                uang += 100;
                goto keluar;


            }else if(nyawak <= 0){
                cout << "KAMU DIKAHLAHKAN OLEH MONSTER" << endl << "JANGAN MENYERAH SILAHKAN COBA LAGI" << endl << endl;
                goto keluar;

            }else if (nyawa <= 0 && nyawak <= 0){
                cout << "PERTEMPURAN SERI";
            }

            break;

            case 3:
            //UNTUK BELI SENJATA
            if(karakter == 1){
                    
                    cout << "============================" << endl;
                    cout << "# SENJATA YANG TERSEDIA :  #" << endl;
                    cout << "#==========================#" << endl;
                    cout << "# 1. PEDANG BESI (300)     #" << endl;
                    cout << "#==========================#" << endl;
                    cout << "# 2. PEDANG KESATRIA (500) #" << endl;
                    cout << "#==========================#" << endl;
                    cout << "# UANG ANDA : " << uang << "          #"<<endl;
                    cout << "#==========================#" << endl;
                

                cout <<"PILIH : ";
                cin >> bs1;

            switch(bs1){
                
            case 1:
                    js = "PEDANG KAYU (DAMAGE +5)";
                    total += 300;
                    damage += 5;
            break;
                    
            case 2:
                    js = "PEDANG BESI (DAMAGE +10)";
                    total += 500;
                    damage += 10;
            break;
                    
            default:
                    cout << "PILIHAN SENJATA TIDAK TERSEDIA";
            break;
                 } 
                 }  
                
            else if (karakter == 2){

                    cout << "============================" << endl;
                    cout << "# SENJATA YANG TERSEDIA :  #" << endl;
                    cout << "============================" << endl;
                    cout << "# 1. PANAH API (200)       #" << endl;
                    cout << "============================" << endl;
                    cout << "# 2. PANAH LEGENDARIS (400)#" << endl;
                    cout << "============================" << endl;
                    cout << "# UANG ANDA : " << uang << "          #" << endl;
                    cout << "============================" << endl;                

                cout <<"PILIH : ";
                cin >> bs2;
            switch(bs2){
                
            case 1:
                    js = "PANAH KAYU (DAMAGE +5)";
                    total += 200;
                    damage += 5;
            break;
                    
            case 2:
                    js = "PANAH API (DAMAGE +10)";
                    total += 400;
                    damage += 10;
            break;
                    
            default:
                    cout << "PILIHAN SENJATA TIDAK TERSEDIA" << endl;
            break;
                 }   
                }

            else if(karakter == 3){
                    cout << "============================" << endl;
                    cout << "# SENJATA YANG TERSEDIA :  #" << endl;
                    cout << "============================" << endl;
                    cout << "# 1. TONGKAT ES (400)      #" << endl;
                    cout << "============================" << endl;
                    cout << "# 2. TONGKAT API (500)     #" << endl;
                    cout << "============================" << endl;
                    cout << "# UANG ANDA : " << uang << "          #" << endl;
                    cout << "============================" << endl;         

                cout << "PILIH : ";
                cin >> bs3;

                switch (bs3)
                {
                case 1:
                js = "TONGKAT SIHIR ES(DAMAGE +5)";
                total += 400;
                damage += 5;
                break;

                case 2:
                js = "TONGKAT SIHIR API (DAMAGE +10)";
                total += 500;
                damage += 10; 
                break;
                
                default:
                cout << "PILIHAN TIDAK VALID ";
                break;
                }
            }

            else{
                cout <<"KARAKTER ANDA TIDAK MEMILIKI SENJATA";
            }
                
                sisa_uang = uang - total;
                
            if(total > uang){
                cout << "UANG ANDA TIDAK CUKUP" << endl;}
                
            else{
                cout << "ANDA MEMBELI " << js << endl <<endl;
                cout << "SISA UANG ANDA : " << sisa_uang <<endl <<endl;
                }
                
            break;
            
            case 4:
                goto pilih;
                break;

            case 5:
                goto keluar;
                break;

            default:
                cout << "PILIHAN TIDAK TERSEDIA";
                break;
                
            cout << endl
                 << "===========================================" << endl;

        }
    } while (opsi <= 5);

    keluar:
    cout << endl << "TERIMAKASIH SUDAH BERMAIN";


    return 0;

}