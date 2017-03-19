#include <iostream>
using namespace std;

int main () {

  // Variabel
int mahasiswa = 0, lulus = 0, tidak = 0;
float IPK, total = 0, Rata = 0;


    //Perulangan Input
  while ( IPK != -999 ) {


  if (IPK >= 0 && IPK <=4 ) {

    // Increment
    mahasiswa++;

    //Mencari Nilai Total
total += IPK  ;

    //Klasifikasi Mahasiswa Lulus
  if (IPK >= 2.75) {lulus++;}
    //Klasifikasi Mahasisswa TIdak Lulus
  if (IPK <= 2.75) {tidak++;}

}
// Input Data
    cout << "Masukan Nilai = " ;
    cin >> IPK ;
  }

// Menampilkan Jumlah Mahasiswa
  cout << "Jumlah Mahasiswa = " << mahasiswa<< endl;
// Menampilkan Mahasiswa Lulus
  cout << "Jumlah Mahasiswa Lulus = " << lulus << endl;
// Menampilkan Mahasiswa Tidak Lulus
  cout << "Jumlah Mahasiswa Tidak Lulus = " << tidak << endl;

//* Rata - Rata
  Rata = total / mahasiswa;
  cout << "Rata Rata Mahasiswa = " << Rata << endl;
return 0;
}
