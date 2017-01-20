/*
14. Napisati program koji učitava s tastature cele brojeve koji predstavljaju temperature vazduha izmerene
tokom godine (broj merenja nije unaprijed poznat). Pretpostaviti da su temperature u intervalu [-100, 100]. 
Učitavanje završiti kada se unese broj izvan tog intervala. 
Ukoliko nije unesena barem jedna ispravna temperatura prekinuti program, inače ispisati prosečnu temperaturu 
 najčešću temperaturu (ukoliko ih ima više, ispisati višu temperaturu).
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
	// Potrebne varijable
	int* temperature = malloc(sizeof(int) * 10); // Pocetnih 30 mesta
	int i = 0, input, count;
	float prosecna, suma;
	int pojavljivanja[201]; // Niz koji broji koliko se koja temperatura pojavila
	int max, temp;

	// Dinamicno unosenje n elemenata u niz
	// Realocira 10 dodadnih mesta na svakih unetih 10 temperatura
	do {
		printf("Unesi temperaturu: ");
		scanf("%d", &input);
		temperature[i] = input;
		i = i + 1;
		if(i % 10 == 0 && i != 0) {
			temperature = realloc(temperature, sizeof(int) * (i + 10));
		}
	} while(input >= -100 && input <= 100);
	count = i - 1;


	// Racuna srednju vrednost i broji pojavljivanje svake temperature
	suma = 0;
	// anuliranje pojavljivanja
	for(i = 0; i < 201; i++) { pojavljivanja[ i ] = 0; }
	for(i = 0; i < count; i++) {
		suma = suma + temperature[i];
		int index = temperature[i]; // Index za racunanje broja pojavljivanja
		// Pozitivne temperature 0 - 100
		// Negativne temperature 101 - 200
		if(index < 0) {
			index = 100 + (-1 * index);
		}
		pojavljivanja[ index ] = pojavljivanja[ index ] + 1;
	}

	max = pojavljivanja[0];
	temp = 0;
	for(i = 0; i < 201; i++) {
		if(pojavljivanja[i] == 0) continue;
		int temperatura = i;
		// Ako je i > 100, onda je u pitanju negativna temperatura
		if(i > 100) temperatura = 100 - i; 

		if(pojavljivanja[i] >= max && temperatura > temp) {
			max = pojavljivanja[i];
			temp = temperatura;
		}

	}

	prosecna = suma / count;
	printf("Prosecna temperatura je: %.2f\n", prosecna);
	printf("Najcesca temperatura je %d\n", temp);

	free(temperature);
	return 0;
}