#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
/* Tugas 20% UTS 30% UAS 40% Kehadiran 10%
A >= 90 , B >=80 , C >= 60 , D >= 50 , E < 50
*/

int main()
{
    // variabel Menu //
    int pilihan;
    char ulang;
    // variabel Nilai //
    float tugas, UTS , UAS, Kehadiran, 
    nilai_akhir;
    
    do {
    
    cout << "          Pilih Menu          " << endl;
    cout << "==============================" << endl;
    cout << "1. Nilai Akhir Mahasiswa " << endl;
    cout << "2. Promo Diskon " << endl;
    cout << "3. Rumus Matematika " << endl;
    cout << endl;
 
    cout << "Pilihan anda: ";
    cin >> pilihan;
    cout << endl;
    
    
    ////////// Nilai Akhir ///////////
    
    switch(pilihan){
      case 1:  
        cout << "     Nilai Akhir Mahasiswa    " << endl;
        cout << "==============================" << endl << endl;
    
    
        cout << "Masukan Nilai Tugas   : ";
        cin >> tugas;
        cout << "Masukan Nilai UTS     : ";
        cin >> UTS;
        cout << "Masukan Nilai UAS     : ";
        cin >> UAS;
        cout << "Masukan Nilai Absensi : ";
        cin >> Kehadiran;
        cout << "----------------------------" << endl;
    
        nilai_akhir = (0.2 * tugas) + (0.3 * UTS) +
                      (0.4 * UAS) + (0.1 * Kehadiran);
    
    
        if (nilai_akhir >= 90)
        cout << "Nilai Akhir Anda Adalah = A" << endl;
        else if (nilai_akhir >= 80)
        cout << "Nilai Akhir Anda Adalah = B" <<endl;
        else if (nilai_akhir >= 60)
        cout << "Nilai Akhir Anda Adalah = C" << endl;
        else if (nilai_akhir >= 50)
        cout << "Nilai Akhir Anda Adalah = D" << endl;
        else  
        cout << "Nilai Akhir Anda Adalah = E" << endl;
        break;
        }
        //////////////////////////////////////////////
        
    switch (pilihan){
      case 2:
      cout << "      Promo Voucher Diskon    " << endl;
      cout << "==============================" << endl << endl;
      int belanjaan, harga_akhir;
      float diskon;
      
        cout << "Masukan Total Belanjaan : Rp. ";
        cin >> belanjaan;
    
        if (belanjaan >= 500000){
        diskon = (belanjaan * 0.15);
        harga_akhir = belanjaan - diskon;
        cout << "Selamat ! Anda Mendapatkan Voucher Diskon Sebesar 15% Dari Total Belanjaan Anda, Yaitu Sebesar : Rp. " << diskon << endl << endl;
        cout << "Jadi, Total Belanjaan Anda Menjadi Rp. " << harga_akhir << endl;
        }
        else if (belanjaan >= 250000){
        diskon = belanjaan * 0.05;
        harga_akhir = belanjaan - diskon;
        cout << "Selamat ! Anda Mendapatkan Voucher Diskon Sebesar 5% Dari Total Belanjaan Anda, Yaitu Sebesar : Rp. " << diskon << endl << endl;
        cout << "Jadi, Total Belanjaan Anda Menjadi Rp. " << harga_akhir << endl;
        }
        else {
        cout << "Mohon Maaf, S&K Mendapatkan Voucher Diskon Perlu Berbelanja Dengan Minimal Rp. 250.000 " << endl << endl;
        cout << "Jadi, Total Belanjaan Anda Menjadi Rp. " << belanjaan << endl;
        }  
        break;
    }
    //////////////////////////////////////////////
    
    int rumus, panjang, lebar, tinggi , luas ,volume, keliling;
    char back_rumus;
    do {
    switch (pilihan){
      case 3:
        cout << "        Rumus Matematika      " << endl;
        cout << "==============================" << endl << endl;
        cout << "1. Luas Balok " << endl;
        cout << "2. Volume Balok " << endl;
        cout << "3. Keliling Balok " << endl;
        cout << "==============================" << endl << endl;
        cout << "Rumus Mana Yang Anda Ingin Gunakan : ";
        cin >> rumus;
        cout << endl;

        switch (rumus){
          case 1:
            cout << "          Luas Balok          " << endl;
            cout << "==============================" << endl << endl;
            cout << "Tentukan Panjang nya  = ";
            cin >> panjang;
            cout << "Tentukan Lebar nya    = ";
            cin >> lebar;
            cout << "Tentukan Tinggi nya   = ";
            cin >> tinggi;
            cout << "------------------------------" << endl;
            
            cout << "Panjang = " << panjang << " cm" << endl;
            cout << "Lebar   = " << lebar << " cm" << endl;
            cout << "Tinggi  = " << tinggi << " cm" << endl << endl;
            
            luas = 2 * (panjang * lebar + panjang * tinggi + lebar * tinggi);
            cout << "Luas Balok = 2 x (pl + pt + lt) = " << luas << " cm" << endl;
            break;
          
        }
        switch (rumus){
          case 2:
            cout << "          Volume Balok        " << endl;
            cout << "==============================" << endl << endl;
            cout << "Tentukan Panjang nya  = ";
            cin >> panjang;
            cout << "Tentukan Lebar nya    = ";
            cin >> lebar;
            cout << "Tentukan Tinggi nya   = ";
            cin >> tinggi;
            cout << "------------------------------" << endl;
            
            cout << "Panjang = " << panjang << " cm" << endl;
            cout << "Lebar   = " << lebar << " cm" << endl;
            cout << "Tinggi  = " << tinggi << " cm" << endl << endl;
            
            volume = panjang * lebar * tinggi;
            cout << "Volume Balok = Panjang x Lebar X Tinggi " << volume << " cm" << endl;
            break;
        }
        switch (rumus){
          case 3:
            cout << "          Keliling Balok        " << endl;
            cout << "================================" << endl << endl;
            cout << "Tentukan Panjang nya  = ";
            cin >> panjang;
            cout << "Tentukan Lebar nya    = ";
            cin >> lebar;
            cout << "Tentukan Tinggi nya   = ";
            cin >> tinggi;
            cout << "------------------------------" << endl;
            
            cout << "Panjang = " << panjang << " cm" << endl;
            cout << "Lebar   = " << lebar << " cm" << endl;
            cout << "Tinggi  = " << tinggi << " cm" << endl << endl;
            
            keliling = 4 * (panjang + lebar + tinggi);
            cout << "Keliling Balok = 4 X (P + L + T) = " << keliling << " cm" << endl;
            break;
            default: 
              cout << "Invalid Number" << endl << endl;
              break;
        }
        
        cout << "Kembali Ke Menu Rumus? (y/t) ";
        cin >> back_rumus;
        cout << endl;
          
    }
    
    } while (back_rumus == 'y');
      cout << "OK";
      cout << endl;
    
    
    cout << "Ingin kembali ke pilihan menu? (y/t)? ";
    cin >> ulang;
    cout << endl;
    }
    
    while (ulang == 'y');
    cout << "Terima Kasih";
    return 0; 
    
}