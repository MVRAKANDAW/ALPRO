#include <iostream>
using namespace std;

int main () {
	
int angka[10], cari;
bool ketemu;

cout << endl;

cout << "\t" "\t" " ------------------------------------" << endl;
cout << "\t" "\t" "|      ALGORITMA & PEMOGRAMAN II     |" << endl;
cout << "\t" "\t" "|    ALGORITMA PENCARIAN BAGI DUA    |" << endl;
cout << "\t" "\t" "|------------------------------------|" << endl;
cout << "\t" "\t" "|NAMA" "\t" ":" "\t"  "MOCH VIANTO RAKANDA W|" << endl;
cout << "\t" "\t" "|KELAS" "\t" ":" "\t" "TIF. K 16 A          |" << endl;
cout << "\t" "\t" "|NIM" "\t" ":" "\t" "16 111 298           |" << endl;
cout << "\t" "\t" "|____________________________________|" << endl;
 
cout << endl;

for (int a=0; a < 10; a++ ) {

cout << "MASUKAN ANGKA  : " ;
cin >> angka[a];
}

cout << endl;

cout << "MASUKAN ANGKA YANG INGIN DICARI : ";
cin >> cari ;

int i = 0;
int j = 9;
int k = (i+j) / 2;

while ( i <= j) {

	if (angka[k] == cari) {

cout << endl;

		cout << "DATA DITEMUKAN PADA INDEKS : " << k ;
		cout << endl;
		break;
	}

else if ( angka[k] < cari )

{
	i = k + 1;

}  else {

	j = k - 1;
}

k = (i+j) / 2;

}

if ( i > j ) {

	cout << "Tidak Ditemukan";
}

	return 0 ;
}