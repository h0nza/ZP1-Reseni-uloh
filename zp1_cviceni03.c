#include <stdio.h>

int main() {
	// Ukol Maximum:
	int a, b, c, max;

	// Ukol Rozpoznani znaku
	char znak;

	// Ukol Vypocet progresivni dane
	int mzda;
	int horni_hranice = 20000;
	int spodni_hranice = 10000;
	int mame_zdanit;

	double vypoctena_dan;
	double nizke_zdaneni = 0.1;
	double stredni_zdaneni = 0.2; 
	double vysoke_zdaneni = 0.3;



	/******************************/
	/******** Ukol maximum ********/
	/******************************/
	printf("Napiste tri cisla ve formatu a,b,c: ");
	scanf("%i,%i,%i", &a, &b, &c);

	// Prvni verze
	if (a > b)
		max = a;
	else
		max = b;

	if (c > max)
		max = c;

	// Druha verze
	/*if (a >= b && a >= c)
		max = a;
	if (b >= a && b >= c)
		max = b;
	if (c >= a && c >= b)
		max = c; */

	printf("Nejvetsi cislo je: %i.\n", max);



	/*******************************/
	/**** Ukol Rozpoznani znaku ****/
	/*******************************/
	printf("Napiste nejaky znak: ");

	/*
	U druheho scanf v programu muze nastat problem.
	Po prvnim provedeni scanf zustava ve vstupni pameti
	znak '\n', tj. ten enter, kterym clovek odsouhlasil
	prvni vstup. Kdyz se spusti tento druhy scanf,
	program vidi na prvnim miste onen znak '\n',
	coz ho okamzite ukonci.
	Tedy ten enter, kterym clovek odsouhlasil vstup 
	do prvniho scanf, vidi druhy scanf jako zacatek
	dalsiho vstupu. A protoze enter (nebo '\n')
	neni soucasti ridiciho retezce scanf,
	tak ukoncuje nacitani, scanf tim konci a nenacte to,
	co bychom chtel aby nacetl.
	Jednoducha pomoc: na zacatku ridiciho retezce uvedte,
	ze na prvnim miste ocekavate bily znak (mezeru),
	pak ten znak '\n' bude brat jako soucast vstupu 
	a korektne nacte do promenne znak nejaky znak. 
	*/
	scanf(" %c", &znak);

	printf("Zadany znak je: ");

	// Zde pouzivame konstanty 'a', 'z' apod.
	// NEPOUZIVAME konkretni cisla z ASCII tabulky
	// Toto je fuj: if (znak >= 97 && znak <= 112) {
	if (znak >= 'a' && znak <= 'z') {
		printf("male pismeno %c", znak);
	} else if (znak >= 'A' && znak <= 'Z') {
		printf("velke pismeno %c", znak);
	} else if (znak >= '0' && znak <= '9') {
		printf("cislice %c", znak);
	} else {
		switch(znak) {
			// Opet: pouzivame konstanty jako napr. '*'
			// NEPOUZIVAME cisla
			// Toto je fuj: case 42: printf("hvezdicka");
			case '!': printf("vykricnik"); break;
			case '?': printf("otaznik"); break;
			case '*': printf("hvezdicka"); break;
			case '@': printf("zavinac"); break;
			case '#': printf("kanalek"); break;
			case '^': printf("striska"); break;
			default: printf("jiny znak"); break;
		}
	}
	printf("\n");



	/*******************************************/
	/****** Ukol Vypocet progresivni dane ******/
	/*******************************************/
	printf("Zadejte mzdu: ");
	scanf(" %d", &mzda);
	vypoctena_dan = 0;

	if (mzda > horni_hranice) {
		mame_zdanit = (mzda - horni_hranice);
		vypoctena_dan += mame_zdanit * vysoke_zdaneni;
		mzda -= mame_zdanit;
	}

	if (mzda > spodni_hranice) {
		mame_zdanit = (mzda - spodni_hranice);
		vypoctena_dan += mame_zdanit * stredni_zdaneni;
		mzda -= mame_zdanit;
	}

	vypoctena_dan += mzda * nizke_zdaneni;

	printf("Odpovidajici vypoctena_dan: %g\n", vypoctena_dan);

	return 0;
}