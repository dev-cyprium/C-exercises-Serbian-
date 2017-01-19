/*
13. Napisati program koji učitava celi broj koji nema više od 9 cifara. Ako broj ima 5 cifara, 
treba ispisati proizvod cifara. Ako broj ima 4 cifre, treba ih redom oduzimati (prva cifra - druga cifra - treća cifra -četvrta cifra). 
Ako broj ima 3 cifre, treba ispisati broj bez središnje cifre.
 Ako broj ima 2 cifre, treba ispisati broj koji čine obrnute cifre učitanog broja.
  Ako broj ima 1 cifru, treba ispisati kvadrat te cifre. 
  Ako broj ima više od šest cifara, potrebno je ispisati prve dve cifre učitanog broja.
Napomena: zadatak rešiti bez korišćenja if naredbe.
*/
#include <stdio.h>
#include <stdlib.h>

/*
 Funkcija koja racuna broj cifara
*/
int brojCifara(int broj) {
	int cifre = 0;
	while(broj = broj / 10) cifre = cifre + 1;
	return cifre+1;
}

int* napraviNizCifara(int broj, int brojCifara) {
	int *t = (int *) malloc(sizeof(int) * brojCifara);
	int i = 0;
	int cifra;
	do {
		cifra = broj % 10;
		t[i] = cifra;
		i = i + 1;
	} while(broj = broj / 10);
	return t;
}

int main() {
	// Varijable koje koristi program
	int broj, cifara;
	int *cifre;

	// Ulazni broj
	printf("Unesi broj: ");
	scanf("%d", &broj);

	// Niz cifara koji ce se koristiti za rad programa
	cifara = brojCifara(broj);
	cifre = napraviNizCifara(broj, cifara);

	// Uraditi odredjenu stvar kao sto nalaze uslov zadatka
	switch(cifara) {
		case 1:
			printf("Rezultat je: %d\n", cifre[0] * cifre[0]);
			break;
		case 2:
			printf("Rezultat je: %d\n", cifre[1] + cifre[0] * 10);
			break;
		case 3:
			printf("Rezultat je: %d\n", cifre[1]);
			break;
		case 4:
			printf("Rezultat je: %d\n", cifre[0] - cifre[1] - cifre[2] - cifre[3]);
			break;
		case 5:
			printf("Rezultat je %d\n", cifre[0] * cifre[1] * cifre[2] * cifre[3] * cifre[4]);
			break;
		default:
			printf("Rezultat je %d %d\n", cifre[0], cifre[1] );
			break;
	}

	free(cifre);
	return 0;
}