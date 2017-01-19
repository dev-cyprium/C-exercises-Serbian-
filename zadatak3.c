/*
	3. Dat je bilijarski sto sa donjim levim uglom (0,0) i gornjim desnim (a,b) i na njemu 
	dve kugle na pozicijama (x1,y1) i (x2,y2). Odrediti ugao pod kojim treba udariti prvu 
	kuglu tako da posle jednog odbijanja od gornje ivice pogodi drugu kuglu.
*/
#include <stdio.h>

// Struktura podataka za kuglu
typedef struct Kugla {
	float x;
	float y;
} Kugla;

int main() {
	// Ulazne varijable
	int a, b;
	Kugla kugla1, kugla2;

	// Unos podataka u program
	printf("Unesite koordinate bilijarskog stola(a,b): ");
	scanf("%d,%d", &a,&b);

	// Unos podataka o kuglama
	printf("Unesi koordinate prve kugle(x1,y1): ");
	scanf("%f %f", &kugla1.x, &kugla1.y);
	printf("Unesi koordinate druge kugle:(x2,y2): ", &kugla2.x, &kugla2.y);

	/* ... Ne znam ... */

	return 0;
}