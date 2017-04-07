#include <iostream>
using namespace std;

//Fungsi pilihan A
pilihanA(){
	cout << "Nilai Minimum : ";
}

//Fungsi pilihan B
pilihanB(){
	cout << "Nilai Maximum : ";
}

// Algoritma
int main () {

//Kamus
int jumlah, angka, min, max = 0;
char pilihan;

//pilihan A/B
cout << "A = Min B = Max" << endl;

//input Data Jumlah
cout << "Masukan Jumlah : ";
cin >> jumlah;

//input Data Pilihan
cout << "Masukan Pilihan : ";
cin >> pilihan;

//Klasifikasi Data A
if (pilihan == 'A') {

	//Perulangan 
	for (angka = 1; angka <= jumlah; angka++) {

//input Data Masukan Angka
cout << "Masukan Angka : ";
cin >> angka;

	//klasifikasi Data Minimum
	if (angka == 1) {
		min = angka;
	} 

	else if (min > angka) {
		min = angka;
	}

}

//Pemanggilan Fungsi A
pilihanA(); cout << min ;

}

//Klasifikasi Data B
if (pilihan == 'B') {

	//Perulangan
	for (angka = 1; angka <= jumlah; angka++) {

//Input Data Masukan Angka
cout << "Masukan Angka : ";
cin >> angka;

	//Klasifikasi Data Maximal
	if (angka == 1) {
		max = angka;
	} 

	else if (max < angka) {
		max = angka;
	}
}

//Pemanggilan Fungsi B
pilihanB(); cout << max;

}

return 0;

}
