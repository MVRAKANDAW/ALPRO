#include <iostream>
using namespace std;

int main () {
    int n [10];

    for ( int i = 1; i < 10 ; i++ ) {
      n[ i ] = i + 100;
    }
    for ( int j = 1; j < 10 ; j++ ) {
      cout << "Angka ke " << j << " : " << n[ j ] << endl;
    }
  return 0;
}
