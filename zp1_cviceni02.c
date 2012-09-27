#include <stdio.h>
int main() {
	// prvni ukol, delka hrany krychle
	int delka_hrany;

	// druhy ukol, nactene desetinne cislo
	double des_cislo;

	// treti ukol, nactene cele cislo
	int cislo;
	// treti ukol, absolutni hodnota nacteneho cisla
	int abs_cislo;

	// ctvrty ukol, delky stran
	int a, b, c;  
	// ctvrty ukol, indikator, jestli lze sestrojit trojuhelnik
	int lze_sestrojit;


	// Prvni ukol "Povrch a objem krychle"
	printf("Zadejte delku strany: ");
	scanf("%i", &delka_hrany);
	printf("Povrch krychle: %i m2\n", 6 * delka_hrany * delka_hrany);
	printf("Objem krychle: %i m3\n", delka_hrany * delka_hrany * delka_hrany);


	// Druhy ukol "Cela cast cisla"
	printf("Zadejte desetinne cislo a ja z nej odseknu desetinnou cast: ");
	scanf("%lf", &des_cislo);
	printf("Cela cast cisla %g je %i.\n", des_cislo, (int)des_cislo);


	// Treti ukol "Absolutní hodnota čísla"
	printf("Zadejte cele cislo a ja vypocitam jeho absolutni hodnotu: ");
	scanf("%i", &cislo);
	abs_cislo = cislo < 0 ? -cislo : cislo;
	printf("Absolutní hodnota cisla %i je %i.\n", cislo, abs_cislo);


	// Ctvrty ukol "Sestrojitelnost trojúhelníku" v hard core verzi
	printf("Zadejte delky stran trojuhelniku ve formatu a,b,c: ");
	scanf("%i,%i,%i", &a, &b, &c);
	lze_sestrojit = (a+b>c) && (a+c>b) && (b+c>a);
	printf("Trojuhelnik %s sestrojit.\n", lze_sestrojit ? "lze" : "nelze");
	lze_sestrojit ? printf("Trojuhelnik lze sestrojit.\n") : printf("Trojuhelnik nelze sestrojit.\n");
	return 0;
}