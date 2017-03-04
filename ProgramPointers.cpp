#include <iostream>
using namespace std;

// Pembuatan Program menggunakan Pointers

int main() {
  int A = 20;
  int *p;

  p = &A;

  cout << "Nilai dari A: ";
  cout << A << endl;

  cout << "Alamat variable A: ";
  cout << p << endl;

  cout << "Nilai dari *p: ";
  cout << *p << endl;

return 0;
}
