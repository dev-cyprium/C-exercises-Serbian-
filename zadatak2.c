/*
2. Novčić se baca četiri puta. Ishod bacanja novčića može biti glava ili pismo. 
 Napisati program koji učitava četiri znaka koji predstavljaju rezultate četiri bacanja novčića 
 (znakovi 'G' ili 'P'). Program treba ispisati koliko puta u procentima se pojavila glava, a koliko pismo. 
 Npr. ako se učitaju sledeći znakovi: 'G', 'G', 'G' i 'P',
 program treba ispisati „U 75% slučajeva se pojavila glava, u 25% pismo“.

 ** Mala modifikacija: dodao sam da se moze uneti proizvoljan broj znakova
*/
#include <stdio.h>
#include <ctype.h>

int main() {
	// Ulazni podaci
	char temp;
	int i = 0;
	int glava = 0, pismo = 0, bacanja = 0;
	float proc_g, proc_p;

	printf("Unesi znaka bacanja( G i P ): ");
	do {
		temp = fgetc(stdin);
		if(isspace(temp)) continue;
		// Brojac znakova i gresaka
		switch(temp) {
			case 'G':
				glava = glava + 1;
				break;
			case 'P':
				pismo = pismo + 1;
				break;
			default:
				printf("Greska u unosu znaka [ %c ]\n", temp);
		}
	} while(temp != '\n' && temp != EOF);
	// Racunanje procenta
	bacanja = glava + pismo;
	proc_g = ((float)glava / (float)bacanja) * 100.0f;
	proc_p = ((float)pismo / (float)bacanja) * 100.0f;
	// Ispis
	printf("Procenat glave: %.2f%%\n", proc_g);
	printf("Procenat pisma: %.2f%%\n", proc_p);
	return 0;
}