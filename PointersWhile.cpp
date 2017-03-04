#include <iostream>
using namespace std;

// Pembuatan Program menggunakan Pointers


int main() {

const int MAX = 3;
int var[MAX] = {10, 100, 200};
int *ptr;

// Alamat array ke Pointers
ptr = var;
int i = 0;

while ( ptr <= &var[ MAX - 1] ) {
  cout << "ALAMAT DARI VAR["<< i <<"] = ";
  cout << ptr << endl;

  cout << "NILAI DARI VAR["<< i <<"] = ";
  cout << *ptr << endl;

//Menunjuk KE MEMORY
ptr++;
i++;
}
return 0;
}
