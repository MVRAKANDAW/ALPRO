#include <iostream>
using namespace std;

//Prototype
long rekursiffaktorial (int f);

int main () {
  int x;
  int n = 4;
  cout << n << "! = " << rekursiffaktorial(n) << endl;
  cout << "Masukan Angka yang akan difaktorialkan : ";
  cin >> x;
  cout << x << "! = " << rekursiffaktorial(x) << endl;
return 0;
}
 long rekursiffaktorial (int f) {
   if (f == 0)
   return 1;
   else
   return f *
rekursiffaktorial (f - 1); //Penghenti
 }
