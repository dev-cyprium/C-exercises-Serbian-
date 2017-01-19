/*
	4. Ispitati da li su u arihmetickom izrazu pravilno postavljene zagrade.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
	// Ulazni podaci
	int leva = 0, desna = 0;
	char temp;

	// Zagrade nisu pravilno zatvorene ako nema isti broj levih i desnih zagrada
	printf("Unesi arihmeticki izraz: ");
	do {
		temp = fgetc(stdin);
		if(isspace(temp)) continue;
		// Brojac znakova i gresaka
		switch(temp) {
			case '(':
				leva = leva + 1;
				break;
			case ')':
				desna = desna + 1;
				break;
		}
	} while(temp != '\n' && temp != EOF);

	// Izlazni podaci
	if(leva == desna) printf("Zagrade su pravilno postavljene\n");
	else printf("Zagrade nisu pravilno postavljene\n");
	return 0;
}