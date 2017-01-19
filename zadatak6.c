/*
6. Tri automobila kreću sa startne pozicije u trenutcima T1<T2<T3 i kreću se konstantnim brzinama 
V1, V2, V3. Ispisati startni broj automobila koji je na vodećoj poziciji u trenutku T>T3.
*/

#include <stdio.h>

// Struktura podataka koja pretstavlja automobil
typedef struct Automobil {
	int id;
	float t0;
	float v;
	float s;
} Automobil;

Automobil prviAutomobil(Automobil a, Automobil b) {
	if(a.s > b.s) {
		return a;
	} else {
		return b;
	}
}

int main() {
	Automobil a1, a2, a3;
	float t;
	Automobil prvi;

	// Indetifikacioni broj automobila
	a1.id = 1;
	a2.id = 2;
	a3.id = 3;

	// Unos podataka
	printf("Unesite startne pozicije t1, t2 i t3: ");
	scanf("%f %f %f", &a1.t0, &a2.t0, &a3.t0);

	// Greska ako t1 < t2 < t3
	if(a1.t0 > a2.t0 || a2.t0 > a3.t0) {
		printf("Greska pri unosu podataka\n");
		return 1;
	}

	printf("Unesite konstantne brzine automobila v1, v2, v3: ");
	scanf("%f %f %f", &a1.v, &a2.v, &a3.v);

	printf("Unesite trenutak t ( t > t3 ): ");
	scanf("%f", &t);
	// Greska ako je t < t3
	if( t < a3.t0 ) {
		printf("Greska pri unosu podataka\n");
		return 1;
	}

	// Izracunavanje predjenih puteva
	a1.s = a1.v * (t - a1.t0);
	a2.s = a2.v * (t - a2.t0);
	a3.s = a3.v * (t - a3.t0);

	// Funkcija vraca prvi automobil
	prvi = prviAutomobil(a1, prviAutomobil(a2, a3));

	// Ispisi identifikaciju prvog automobila
	printf("Prvi automobil je: %d\n", prvi.id);

	return 0;
}