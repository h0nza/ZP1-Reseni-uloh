
/*
jo, dojeli jsme az ted, jeli jsme pres hranice a navic oni nemaj dalnicni znamku.
mam jednicku.
*/

int main (void) {

int i;
int pole[] = {20, -250, -20, 5, 89, 1, 56, 189, -2, 5, 9, 15, 687, 32, 31};

int maximum_pole (int cisla[], int delka_pole) {

   int max = cisla[0];

   for (i = 0; i < delka_pole; i++)
       if (pole[i] > max)
	  max = pole[i];
   return max;
}

printf("maximum pole je: %i", maximum_pole(pole, 15));

return 0;
}
