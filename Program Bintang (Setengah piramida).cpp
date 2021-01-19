#include <conio.h>
#include <stdio.h>
using namespace std;
void deret();
main(){
 deret();	
}

void deret() {
	int i, j, t;

	printf(" Masukan Tinggi Piramid : "); scanf(" %d", &t);
	for (i = 1; i<=t; i++){
		for(j = 1; j<=i; j++){
			printf(" *");
		}
		printf("\n");
	}
	getch ();
}
