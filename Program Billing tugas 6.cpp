//Membuat program billing
#include<iostream>
using namespace std;
int main()
{

	int td1,j1,m1,d1,sm1;
	cout<<"Masukan Jam Awal :";
	cin>>j1;
	cout<<"Masukan Menit Awal :";
	cin>>m1;
	cout<<"Masukan Detik Awal :";
	cin>>d1;
	
	int td2,j2,m2,d2,sm2;
	cout<<"Masukan Jam Akhir :";
	cin>>j2;
	cout<<"Masukan Menit Akhir :";
	cin>>m2;
	cout<<"Masukan Detik Akhir :";
	cin>>d2;
	
	td1=(j1*3600)+(m1*60)+d1;
	td2=(j2*3600)+(m2*60)+d2;
	
	int td3,j3,m3,d3,sm3;
	td3=td2-td1;
	j3=td3/3600;
	sm3=td3%3600;
	m3=sm3/60;
	d3=sm3%60;
	cout<<"HASIL PERBEDAAN ANTARA JAM AWAL & JAM AKHIR : "<<j3<<":"<<m3<<":"<<d3;
	return 0;
}
