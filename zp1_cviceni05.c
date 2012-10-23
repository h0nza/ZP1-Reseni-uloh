#include <stdio.h>

#define POCET_SUMA_PREFIXU 6
#define POCET_ZNAKU 255
#define ERATOSTHENOVO_MAXIMUM 97


void suma_prefixu() {
	int cisla[POCET_SUMA_PREFIXU] = {5, 3, 7, 1, 0, 10};
	int i;

	printf("Vstupni pole:\n");
	for (i = 0; i < POCET_SUMA_PREFIXU; i++) 
		printf("%i ", cisla[i]);

	for (i = 1; i < POCET_SUMA_PREFIXU; i++)
		cisla[i] += cisla[i - 1];

	printf("\nSuma prefixu tohoto pole:\n");
	for (i = 0; i < POCET_SUMA_PREFIXU; i++) 
		printf("%i ", cisla[i]);
}


void cetnost_znaku() {
	char veta[] = "aaa bb ccc ddd fffeeeshdhdkkay23455";
	int vyskyty[POCET_ZNAKU];
	int i;
	char znak;

	for (i = 0; i < POCET_ZNAKU; i++) 
		vyskyty[i] = 0;

	for (i = 0; znak = veta[i]; i++) 
		vyskyty[znak]++;

	for (i = 0; i < POCET_ZNAKU; i++) {
		if (vyskyty[i] > 0)
			printf("'%c': %i\n", i, vyskyty[i]);
	}
}


void eratosthenovo_sito() {
	int i, j, cislo;
	int sito[ERATOSTHENOVO_MAXIMUM + 1];

	for (i = 0; i <= ERATOSTHENOVO_MAXIMUM; i++)
		sito[i] = i;

	sito[1] = 0;

	for (i = 2; i <= ERATOSTHENOVO_MAXIMUM; i++) {
		if (sito[i]) {
			// printf("%i ", i);
			for (j = i * 2; j <= ERATOSTHENOVO_MAXIMUM; j += i) {
				sito[j] = 0;
			}
		}
	}

	for (i = 0; i <= ERATOSTHENOVO_MAXIMUM; i++) {
		if (sito[i]) {
			// printf("%i, ", sito[i]);
			printf("%i, ", i);
		}
	}
}


int main() {
	printf("Suma prefixu:\n");
	suma_prefixu();
	printf("\n\nCetnost znaku:\n");
	cetnost_znaku();
	printf("\nEratosthenovo sito: \n");
	eratosthenovo_sito();
}