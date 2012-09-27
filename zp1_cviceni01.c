#include <stdio.h>

int main() {
	// Definice promennych pro druhy ukol
	int cislo = 3;
	double des_cislo = 3.45;
	char znak = '+';
	double male_cislo = 1.2e-10;

	// Definice promenne pro treti ukol
	int zadane_cislo;

	// Prvni ukol "Hello World!"
	printf("Hello, world!\n");

	// Druhy ukol
	printf("Hodnota promenne cislo je: %d\n", cislo);
	printf("Hodnota promenne des_cislo je: %g\n", des_cislo);
	printf("Hodnota promenne znak je: %c\n", znak);
	printf("Hodnota promenne male_cislo je: %g\n", male_cislo);

	// Treti ukol
	printf("Zadejte cislo: ");
	scanf("cislo:%d", &zadane_cislo);
	printf("Cislo %d odpovida cislu %o v osmickove soustave a cislo %X v sestnactkove soustave.\n", zadane_cislo, zadane_cislo, zadane_cislo);
	return 0;
}