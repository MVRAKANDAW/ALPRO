#include <iostream>
using namespace std;

// Pembuatan Program menggunakan Pointers

//prototype

int double_it (int *x, int *y);

int main() {
  int x, y;

  cout << "Masukkan dua angka (pisahkan dengan spasi ex: 1 2) : " << endl;

  cin >> x >> y;

  cout << "Sebelum melewati fungsi double_it" << endl;

  cout << "x \t = \t" << x << endl;
  cout << "y \t = \t" << y << endl;
  double_it(&x, &y);

  cout << "setelah melewati fungsi double_it" << endl;

  cout << "x \t = \t" << x << endl;
  cout << "y \t = \t" << y << endl;


return 0 ;
}

int double_it (int *x, int *y) {

      *x *= 4;
      *y *= 4;
return 0;
}
