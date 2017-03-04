#include <iostream>
using namespace std;

class Manusia {
public: //Hak Akses / scope
  int tinggi;
  int beratBadan;
  string nama;

private :
  string pacar;
public :
Makan () {
  cout << "Makan" << endl;
  }
  Mandi () {
    cout << "Mandi" << endl;
    }
    namaPacar () {
      cout << "KJ" << endl;
      cout << pacar << endl;
      }
};

int main () {
    Manusia Rakanda;
    Manusia Rangga;

    Rakanda.tinggi = 165;
    cout << Rakanda.tinggi << endl;
    Rakanda.Makan();
    Rakanda.Mandi();
    Rakanda.namaPacar();

    Rangga.tinggi = 140;
    cout << Rangga.tinggi << endl;
    Rangga.Makan();
      Rangga.Mandi();

return 0;
}
