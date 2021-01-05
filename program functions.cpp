#include <iostream>
//Fungsi matematika dasar
#include <cmath>

using namespace std;

//deklarasi konversi total detik ke jam, menit, detik
int jam();
//deklarasi konversi jam, menit, detik ke total detik
int total_detik();
//deklarasi header
void header();

int main() {
	
	int j, m, d, td, sm;
	header();
	
	total_detik();
	jam();
	return 0;
}
void header(){
	//header 
	cout <<"Nama     : Ilva Laela Sari " << endl;
	cout <<"NPM      : 20.14.1.0011 "<< endl;
	cout <<"Tugas    : 7 " << endl;
	cout <<"Kelas     : 1A " << endl;
	cout <<"==============================================================================" << endl;
	cout <<"Function Konversi jam, menit menjadi total detik \n";
	cout <<"Function Konversi total detik ke jam, menit, detik" << endl;
	cout <<"==============================================================================" << endl;
}
//Function konversi total detik ke jam, menit, detik
int jam(){
	int j, m, d, td, sm;
	cout <<"==============================================================================" << endl;
	cout <<"Masukan waktu total detik : "; cin >> td; 
	cout <<"==============================================================================" << endl;
	j = (double) td / 3600;
	sm = td % 3600;
	m = (double) sm / 60;
	d = sm % 60;
	cout <<"==============================================================================" << endl;
	cout <<"Hasil konversi detik ke jam : " << j << " jam " << " : " << m << " menit " << " : " << d << " detik " << endl;
	cout <<"==============================================================================" << endl;
	return td;
}
//Function konversi jam, menit, deti, ke total detik
int total_detik() {
	int j, m, d, td;
	cout <<"==============================================================================" << endl;
	cout <<"Masukan Jam     : " ;
	cin >> j;
	cout <<"Masukan Menit     : " ;
	cin >> m;
	cout <<"Masukan Detik     : " ;
	cin >> d;
	cout <<"==============================================================================" << endl;
	td = j * 3600 + m * 60 + d;
	cout <<"Hasil Konversi ke total detik    : " << td << endl;
	return td;
}
