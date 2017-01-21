/*
	11. Odrediti dužinu zajedničkog odsečka (ako ga ima) za [a,b] i [c,d] bez obzira na njihov raspored.
*/
#include <stdio.h>


int main() {
	// Varijable koje koristi program
	int a, b;
	int c, d;
	int duzina;

	// Unos podataka u program
	printf("Unesi odsecak [a,b]: ");
	scanf("%d %d", &a, &b);	

	printf("Unesi odsecak [c,d]: ");
	scanf("%d %d", &c, &d);

	// Racunanje pozicije odsecka na brojevnoj pravi
	if((a < c && a < d && b < c && b < d) || (c < a && c < b && d < a && d < b)) {
		duzina = 0;
	} else if(a < c && a < d && c < b && b < d) {
		duzina = b - c;
	} else {
		duzina = d - a;
	}
	// Ako duzina postoji, ispisati duzinu, u suprotnom ispisati da se odseci ne seku
	if(duzina) {
		printf("Duzina je : %d\n", duzina);
	} else {
		printf("Odseci se ne seku.\n");
	}

	return 0;
}