#include <iostream>
using namespace std;
int main() {

    float nSensor1, nSensor2, nSensor3, rerata;
    string status;
    string kota;

    cout << "masukan kotanya = ";
    cin >> kota;

    cout << "sensor polutan 1 = ";
    cin >> nSensor1;

    cout << "sensor polutan 2 = ";
    cin >> nSensor2;

    cout << "sensor polutan 3 = "
        ;
    cin >> nSensor3;

    rerata = (nSensor1 + nSensor2 + nSensor3) / 3;

    if (rerata >= 75) {
        status = "Tidak sehat";
    }
    else if (nSensor1 >= 45) {
        status = "Tidak Sehat";
    }
    else
    {
        status = "Sehat";
    }
    system("pause");
}


// 1. int a;  ,string mahasiswa;  , float nBil1, nBil2 , nBil3; 
// 2. fungsi :int penjumlahan(int bil_1, int bil_2) {}
//    procedur :  return bil_1 + bil_2;
// 3. 
// 4. 
// 5.   struct Mahasiswa {
//      string nim;
//      string nama;
//      DetailAlamat alamat;
//      int umur;
//      };
//
//
//