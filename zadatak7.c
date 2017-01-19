/*
7. Za pravljenje tehničkog uređaja koriste se 4 vrste komponenti, i to prve 2 komada, druge 4 komada, 
treće 5 komada i četvrte 3 komada. Ako firma na skladištu ima:
 A komponenti prvog, B drugog, C trećeg i D četvrtog tipa.
 Odrediti maksimalan broj uređaja koje može proizvesti.
*/
#include <stdio.h>

typedef struct Skladiste {
	int prve;
	int druge;
	int trece;
	int cetvrte;
} Skladiste;

/* Funkcija vraca 1 ako je uspesno napravljen uredjaj,
a 0 ako uredjaj nije uspesno napravljen */
int napraviUredjaj(Skladiste *skladiste) {
	if( (skladiste->prve - 2) < 0 ||
		(skladiste->druge - 4) < 0 ||
		(skladiste->trece - 5) < 0 ||
		(skladiste->cetvrte - 3) < 0) {
		// Nedovoljno komponenti
		return 0;
	}
	skladiste->prve = skladiste->prve - 2;
	skladiste->druge = skladiste->druge - 4;
	skladiste->trece = skladiste->trece - 5;
	skladiste->cetvrte = skladiste->cetvrte - 3;

	return 1;
}

int main() {
	// Podaci
	Skladiste skladiste;
	int broj_uredjaja = 0;

	// Unos podataka;
	printf("Unesite podatke u skladiste: ");
	scanf("%d %d %d %d", &skladiste.prve, &skladiste.druge, &skladiste.trece, &skladiste.cetvrte);

	// Fabrika uredjaja
	while( napraviUredjaj(&skladiste) ) {
		broj_uredjaja = broj_uredjaja + 1;
		printf("Uredjaj napravljen.\n");
		printf("Ostatak komponenti:\n");
		printf(" - %d prve\n", skladiste.prve);
		printf(" - %d druge\n", skladiste.druge);
		printf(" - %d trece\n", skladiste.trece);
		printf(" - %d cetvrte\n", skladiste.cetvrte);
		printf("----------------\n");
	}

	// Ispis podataka
	printf("Uspesno napravljenih uredjaja: %d\n", broj_uredjaja);
	return 0;
}