/*
	8. Napisati program kojim se štampaju svi trocifreni brojevi koji 
	imaju osobinu da su deljivi brojem koji se dobija izbacivanjem srednje cifre.
*/
#include <stdio.h>

int main() {
	// Varijable koje koristi program
	int i;
	int t; // Broj kada se izbaci srednja cifra

	// Petlja koja ide kroz sve trocifrene brojeve
	for(i = 100; i < 1000; i++) {
		t = ((i / 100) * 10) + (i % 10); // Matematicko dobijanje trazenog broja
		// Ispisati brojeve koji su deljivi sa ovim dobijenim brojem
		if(i % t == 0) {
			printf("Broj: %d\n", i);
		}
	}

	return 0;
}