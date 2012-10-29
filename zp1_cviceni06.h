/** @file
 *
 * zadani cviceni06 jako .h hlavickovy soubor + doxygen!
 * lze #include-ovat do implementacnich nebo testovacich .c souboru
 *
 * mo�n� odstranit diakritiku �pln�, nebo pou��t UTF-8? 8859-2 je nebli��� k windows cp1250 ;-)
 * vim: fenc=iso-8859-2
 */

/**
Maximum pole: napi�te funkci int maximum_pole(int cisla[], int delka_pole).
Funkce projde cel� p�edan� pole a vr�t� nejv�t�� prvek z tohoto pole.
P�edpokl�dejte, �e p�edan� pole nebude pr�zdn�.

P��klad vol�n� funkce:<pre>

 int pole[] = {4, 6, 1, 9, 2};
 printf("%i", maximum_pole(pole, 5)); // vypise 9

 int pole[] = {-4, -6, -1, -9, -2};
 printf("%i", maximum_pole(pole, 5)); // vypise -1
</pre>
*/

int maximum_pole (int cisla[], int delka_pole);

 /**
 Najdi znak: Napi�te funkci int najdi_znak(char retezec[], char znak, int n), kter� vrac� index n-t�ho v�skytu p�edan�ho znaku v p�edan�m �et�zci. Pokud tam takov� znak nen�, vr�t� funkce -1. P��klady:

 printf("Index: %i\n", najdi_znak("sekera sobota taxi", 's', 1)); // Index: 0 
 printf("Index: %i\n", najdi_znak("sekera sobota taxi", 's', 2)); // Index: 7
 printf("Index: %i\n", najdi_znak("sekera sobota taxi", 'x', 1)); // Index: 16
 printf("Index: %i\n", najdi_znak("sekera sobota taxi", 'x', 2)); // Index: -1
 printf("Index: %i\n", najdi_znak("sekera sobota taxi", 'a', 3)); // Index: 15 
 printf("Index: %i\n", najdi_znak("sekera sobota taxi", '!', 3)); // Index: -1
  

  V prvn�m p��pad� to vr�tilo 0, proto�e prvn� v�skyt znaku 's' je na indexu 0.
  Ve druh�m to vr�tilo 7, proto�e druh� v�skyt znaku 's' je na indexu 7. Atp.
  */
int najdi_znak(char retezec[], char znak, int n);

/**
  P��jmy a v�daje: napi�t� dv� funkce double prijem(double castka) a double vydaj(double castka).
  D�le deklarujte glob�ln� prom�nnou double zustatek, kterou iniciazujte na nulu.
  Ob� funkce budou m�t jeden parametr, finan�n� ��stku.
  Funkce prijem vezme danou ��stku a p�i�te ji k z�statku.
  Funkce vydaj naopak p�edanou ��stku ode�te od z�statku.
  Pokud je p�edan� ��stka v�t�� ne� aktu�ln� z�statek, funkce vydaj neprovede transakci a jen vr�t� aktu�ln� sumu v�daj�.

  h0nza: muze byt castka zaporna???
  h0nza: Hmm, nehlasit nejak vyjimecny stav???

  Dal�� �lohou funkc� bude, �e budou uvnit� sebe, pomoc� statick� prom�nn�, pamatovat celkov� p��jmy a celkov� v�daje.
  Tj. pokud t�ikr�t zavol�me prijem(1000), bude m�t statick� prom�nn� ve funkci prijem hodnotu 3000.
  Tyto celkov� p��jmy a v�daje budou z�rove� n�vratovou hodnotou funkc�.
  Tj. po prvn�m zavol�n� prijem(1000) by funkce vr�tila 1000, po druh�m zavol�n� by vr�tila 2000, po t�et�m 3000.
  Funkce prijem tak v�dy vrac� sou�et v�ech p��jm� a funkce vydaj sou�et v�ech v�daj�. P��klad:
<pre>
  printf("Zustatek: %g\n", zustatek);        // Zustatek: 0
  printf("Prijmy: %g\n", prijem(1500));      // Prijmy: 1500
  printf("Prijmy: %g\n", prijem(4000));      // Prijmy: 5500 
  printf("Vydaje: %g\n", vydaj(500));        // Vydaje: 500
  printf("Zustatek: %g\n", zustatek);        // Zustatek: 5000
  printf("Prijmy: %g\n", prijem(1000));      // Prijmy: 6500
  printf("Vydaje: %g\n", vydaj(2500));       // Vydaje: 3000
  printf("Zustatek: %g\n", zustatek);        // Zustatek: 3500
  printf("Vydaje: %g\n", vydaj(150000));     // Vydaje: 3000
  printf("Zustatek: %g\n", zustatek);        // Zustatek: 3500
  printf("Prijmy: %g\n", prijem(500000));    // Prijmy: 506500
  printf("Vydaje: %g\n", vydaj(150000));     // Vydaje: 153000
  printf("Zustatek: %g\n", zustatek);        // Zustatek: 353500
</pre>
*/
  extern double zustatek;

  double prijem (double castka);
  double vydaj  (double castka);

