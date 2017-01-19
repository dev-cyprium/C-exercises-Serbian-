/*
12. Napisati program koji učitava cele brojeve. Učitavanje treba prekinuti kada se učita broj 0. Potrebno je
ispisati broj učitanih petocifrenih, četvorocifrenih, trocifrenih, dvocifrenih i jednocifrenih brojeva.
*/
#include <stdio.h>

int main() {
	// Varijable koje koristi program
	int unos;

	int jed = 0, dvo = 0, tro = 0, cet = 0, pet = 0;
	printf("Unesi brojeve: \n");
	do {
		scanf("%d", &unos);
		if(unos >= 0 && unos <= 9) jed = jed + 1;
		else if(unos >= 10 && unos <= 99) dvo = dvo + 1;
		else if(unos >= 100 && unos <= 999) tro = tro + 1;
		else if(unos >= 1000 && unos <= 9999) cet = cet + 1;
		else if(unos >= 10000 && unos <= 99999) pet = pet + 1;
		else {
			printf("Greska: broj nije podrzan\n");
			return 1;
		}
	}while(unos != 0);

	printf("Jednocifrenih   : %d\n", jed);
	printf("Dvocifrenih     : %d\n", dvo);
	printf("Trocifrenih     : %d\n", tro);
	printf("Cetvorocifrenih : %d\n", cet);
	printf("Petocifrenih    : %d\n", pet);
	return 0;
}