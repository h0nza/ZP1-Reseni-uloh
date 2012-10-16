#include <stdio.h>

void nasobilka() {
	int i, cislo, pocet_nasobku, limit = 100;
	

	printf("Napiste cislo a ja vypisi jeho nasobky do %d: ", limit);
	scanf("%i", &cislo);

	pocet_nasobku = limit / cislo;
	for (i = 1; i <= pocet_nasobku; i++) {
		printf("%i", i * cislo);

		// nechceme carku za poslednim cislem
		if (i < pocet_nasobku) 
			printf(", ");
	}
	printf("\n");
}


void ctverec() {
	int radek, sloupec, hrana;

	printf("Napiste delku hrany ctverce: ");
	scanf("%i", &hrana);

	for (radek = 1; radek <= hrana; radek++) {
		for (sloupec = 1; sloupec <= hrana; sloupec++) {
			if (radek == 1 || radek == hrana) {
				printf("*");
			} else {
				if (sloupec == 1 || sloupec == hrana) {
					printf("*");
				} else {
					printf(" ");
				}	
			}
		}
		printf("\n");
	}
	printf("\n");
}


void prvocisla() {
	int cislo, delitel, limit = 100;

	printf("\nPrvocisla mensi nez %i:\n", limit);
	// Pokud bychom zadali limit <= 2, nesmi se vytisknout ani 2
	if (limit > 2) {
		printf("2");
	}

	// Zacneme iterovat od cislo=3 a budeme vzdy pricitat +2, takze budeme zkouset jen licha cisla.
	for (cislo = 3; cislo < limit; cislo += 2) {
		// Zjistime, jestli je cislo i delitelne nejakym cislem z intervalu 3 az (cislo-1).
		// Lze to jeste zoptimalizovat tak, ze vezmeme jen interval 3 az odmocnina(cislo)
		for (delitel = 3; delitel < cislo; delitel += 2) {
			if (cislo % delitel == 0) {
				// Pokud delitel deli cislo, pak uz vime, ze cislo neni prvocislo
				break;
			}
		}
		// Pokud neni delitelne zadnym mensim cislem, pak predchozi
		// cyklus dojel az do konce a tim padem plati cislo == delitel. 
		if (cislo == delitel) {
			printf(", %d", cislo);
		}
	}

	printf("\n");
}

int main() {
	// ctverec();
	// nasobilka();
	prvocisla();
}