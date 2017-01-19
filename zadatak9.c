/*
9. Napisati program koji za ulog u banci od s dinara određuje iznos uloga nakon n meseci,
 ako je mesečna kamata p%.
*/
#include <stdio.h>

int main() {
	// Varijable koje koristi program
	int ulog, meseci, i;
	float kamata;

	// Ulazni podaci
	printf("Unesite ulog u banci: ");
	scanf("%d", &ulog);

	printf("Unesite kamatu: ");
	scanf("%f", &kamata);
	kamata = kamata / 100; // pretvaranje kamate u decimalnu formu
	printf("Decimalna kamata %.2f\n", kamata);

	printf("Unesite broj meseci: ");
	scanf("%d", &meseci);

	for(i = 0; i < meseci; i++) {
		ulog = ulog + (ulog * kamata);
	}

	printf("Trenutno stanje: %d\n", ulog);
	return 0;
}