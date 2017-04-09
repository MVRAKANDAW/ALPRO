#include <iostream>
using namespace std;

//PROGRAM MASUKAN HURUF 
//MENENTUKAN JUMLAH A


int main(){
	
//kamus
int a = 0;
char huruf[10];

//Pengulangan 
for (int i = 0; i < 10 ; i++) {

	//Input Data
	cout << " MASUKAN HURUF : " ;
	cin >> huruf[i] ;

	//Klasifikasi DATA
		if (huruf[i] == 'A') {

		a++;

	}
}
//Menampilkan jumlah A
cout << "JUMLAH A = " << a ;
	return 0;
}