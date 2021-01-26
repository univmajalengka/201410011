#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
//deklarasi konstanta
const float persentunjangan = 0.2;
const float persenpajak = 0.15;

void garis();

int main () {
	//deklarasi variabel
	string namakaryawan;
	long gajibersih;
	float gajipokok;
	int pajak, tunjangan;
	cout << "Program menghitung Take Home Pay (Gaji bersih)" << endl;
	garis();
	//masukan nama karyawan
	cout << "Masukan Nama Karyawan : ";
	getline(cin,namakaryawan);
	//masukan gaji pokok
	cout << "Masukan Gaji Pokok Karyawan : Rp. ";
	cin >> gajipokok;
	garis();
	//perhitungan tunjangan
	tunjangan = persentunjangan * gajipokok;
	//perhitungan pajak 
	pajak = persenpajak * gajipokok;
	//perhitungan gaji bersih
	gajibersih = gajipokok + tunjangan - pajak;
	
 	//tampilan akhir 
	cout<<"|-------------------------------------------------------------------|\n";
	cout<<"|Nama karyawan : " << namakaryawan <<" |" << " Gaji bersih Rp. " << gajibersih << endl;
	cout<<"|-------------------------------------------------------------------|" << endl;
	
	cin.get();
	return 0;
}

	 void garis()
	 {
	 cout<<"|-------------------------------------------------------------------|" << endl;	
	 }
