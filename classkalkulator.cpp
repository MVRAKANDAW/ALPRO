#include <iostream>
using namespace std;

class kalkulator {

//tombol layar -> variabel
// tambah, kurang, kali, bagi -> fungsi
public :
  int a;
  int b;

int tambah (int a, int b) {
  return a + b;
}
int kurang (int a, int b) {
  return a - b;
}
int kali (int a, int b) {
  return a*b;
}
int bagi (int a, int b) {
  return a/b;
  }
};


int main() {
  kalkulator program;

  cout << "Masukan Nilai A : ";
  cin >> program.a;

  cout << endl;

  cout << "Masukan Nilai B : ";
  cin >> program.b;

  cout <<"Hasil Tambah : "<<program.tambah(program.a, program.b) << endl;
  cout <<"Hasil Kurang : "<<program.kurang(program.a, program.b) << endl;
  cout <<"Hasil Kali : "<<program.kali(program.a, program.b)<< endl;
  cout <<"Hasil Bagi : "<<program.bagi(program.a, program.b)<< endl;

 return 0;
}
