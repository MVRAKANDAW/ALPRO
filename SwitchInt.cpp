#include <iostream>
using namespace std;

int main () {

int nilai;
cout << "Masukan Nilai :";
cin >> nilai;

switch (nilai) {
  case 1 : cout << "Jelek" << endl;

  break;

  case 2 : cout << "Cukup" << endl;

  break;

  case 3 : cout << "Lumayan" << endl;

  break;

  case 4 : cout << "Bagus" << endl;

  break;

default : cout << "Tidak Ada" << endl;

}

  return 0;
}
