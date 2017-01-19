/*
	1. Napišite program koji učitava ukupni broj vozila i ukupni broj guma na parkiralištu. 
	Vozila mogu biti automobili ili motori, pri čemu automobil ima četiri gume, a motor dve gume. 
	Program treba da ispiše koliko na parkiralištu ima automobila, a koliko motora.
*/
#include <stdio.h>

int main() {
	// Varijable
	int guma, vozila;
	int automobili = 0, motori = 0;
	// Unos podataka u program
	printf("Unesite koliko ima vozila: ");
	scanf("%d", &vozila);
	printf("Unesite koliko ima guma: ");
	scanf("%d", &guma);
	// Greska u unosu
	if(guma & 1) {
		printf("Greska: mora postojati paran broj guma\n");
		return 1;
	}
	/*
		Resavanjem sistema(gde su x automobili, a y motori):
		4x + 2y = guma
		 x +  y = vozila
		dobijaju se jednoznacna resenja za automobile i motore.
	*/
	motori = (4 * vozila - guma) / 2;
	automobili = vozila - motori;

	// Greske u broju guma
	if(motori < 0 || automobili < 0) {
		printf("Greska: pogresan odnos guma i vozila\n");
		return 1;
	}

	// Ispis podataka na ekran
	printf("Automobila ima: %d\n", automobili);
	printf("Motora ima: %d\n", motori);
	return 0;
}