
/*
jo, dojeli jsme az ted, jeli jsme pres hranice a navic oni nemaj dalnicni znamku.
mam jednicku.
*/

//chyba: chybi #include <stdio.h> !!!
int main (void) {

int i; //chyba: tuto promennou definovat ve funkci maximum_pole() !
int pole[] = {20, -250, -20, 5, 89, 1, 56, 189, -2, 5, 9, 15, 687, 32, 31};

int maximum_pole (int cisla[], int delka_pole) { //chyba: definujes funkci ve funkci! GNU C to sice snese/umi, ale!!!

   int max = cisla[0];
//chyba? 1. protoze max jsi inicialozovala na cislo[0], nemusis for () cyklus inicialovat i=0, ale i=1
//       2. melo by se kontrolovat, je-li delka_pole >=1, delka <=0 je nesmysl
   for (i = 0; i < delka_pole; i++) //chyba? ja bych dal { ... } i kolem vsech jedno-prikazu
       if (pole[i] > max) //chyba!!!!!!!! tady pouzivas promennou mimo telo funkce!!! argument je cisla[] !!!
	  max = pole[i];
   return max;
}

printf("maximum pole je: %i", maximum_pole(pole, 15));

return 0;
}
