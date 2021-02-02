#include <iostream>
using namespace std;
int main(){
	int pembelian, discon, jumlahtotal;
	cout << "---------------------------------------------------" << endl;
	cout << " Program Menghitung Discon " << endl;
	cout << "---------------------------------------------------" << endl;
	
	cout<<"Masukan Total Pembelian  : Rp. ";
	cin>>pembelian;
	if (pembelian >= 100000){
		discon = pembelian * 0.15;
		jumlahtotal = pembelian - discon;
		cout<<"Jumlah yang harus dibayar dengan diskon 15% adalah : Rp. "<<jumlahtotal;
}
else if(pembelian >= 50000){
		discon = pembelian * 0.125;
		jumlahtotal = pembelian - discon;
		cout<<"Jumlah yang harus dibayar dengan diskon 12.5% adalah : Rp. "<<jumlahtotal;
}
else if(pembelian >= 25000){
		discon = pembelian * 0.10;
		jumlahtotal = pembelian - discon;
		cout<<"Jumlah yang harus dibayar dengan diskon 10% adalah : Rp. "<<jumlahtotal;
}
else if(pembelian >= 0 ){
	cout<<"Jumlah yang harus dibayar adalah : Rp. "<<pembelian;
}
else{
	cout<<"Masukan total pembelian di atas 0";
}
return 0;
}
