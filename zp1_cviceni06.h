/** @file
 *
 * zadani cviceni06 jako .h hlavickovy soubor + doxygen!
 * lze #include-ovat do implementacnich nebo testovacich .c souboru
 *
 * mo¾ná odstranit diakritiku úplnì, nebo pou¾ít UTF-8? 8859-2 je nebli¾¹í k windows cp1250 ;-)
 * vim: fenc=iso-8859-2
 */

/**
Maximum pole: napi¹te funkci int maximum_pole(int cisla[], int delka_pole).
Funkce projde celé pøedané pole a vrátí nejvìt¹í prvek z tohoto pole.
Pøedpokládejte, ¾e pøedané pole nebude prázdné.

Pøíklad volání funkce:<pre>

 int pole[] = {4, 6, 1, 9, 2};
 printf("%i", maximum_pole(pole, 5)); // vypise 9

 int pole[] = {-4, -6, -1, -9, -2};
 printf("%i", maximum_pole(pole, 5)); // vypise -1
</pre>
*/

int maximum_pole (int cisla[], int delka_pole);

 /**
 Najdi znak: Napi¹te funkci int najdi_znak(char retezec[], char znak, int n), která vrací index n-tého výskytu pøedaného znaku v pøedaném øetìzci. Pokud tam takový znak není, vrátí funkce -1. Pøíklady:

 printf("Index: %i\n", najdi_znak("sekera sobota taxi", 's', 1)); // Index: 0 
 printf("Index: %i\n", najdi_znak("sekera sobota taxi", 's', 2)); // Index: 7
 printf("Index: %i\n", najdi_znak("sekera sobota taxi", 'x', 1)); // Index: 16
 printf("Index: %i\n", najdi_znak("sekera sobota taxi", 'x', 2)); // Index: -1
 printf("Index: %i\n", najdi_znak("sekera sobota taxi", 'a', 3)); // Index: 15 
 printf("Index: %i\n", najdi_znak("sekera sobota taxi", '!', 3)); // Index: -1
  

  V prvním pøípadì to vrátilo 0, proto¾e první výskyt znaku 's' je na indexu 0.
  Ve druhém to vrátilo 7, proto¾e druhý výskyt znaku 's' je na indexu 7. Atp.
  */
int najdi_znak(char retezec[], char znak, int n);

/**
  Pøíjmy a výdaje: napi¹tì dvì funkce double prijem(double castka) a double vydaj(double castka).
  Dále deklarujte globální promìnnou double zustatek, kterou iniciazujte na nulu.
  Obì funkce budou mít jeden parametr, finanèní èástku.
  Funkce prijem vezme danou èástku a pøiète ji k zùstatku.
  Funkce vydaj naopak pøedanou èástku odeète od zùstatku.
  Pokud je pøedaná èástka vìt¹í ne¾ aktuální zùstatek, funkce vydaj neprovede transakci a jen vrátí aktuální sumu výdajù.

  h0nza: muze byt castka zaporna???
  h0nza: Hmm, nehlasit nejak vyjimecny stav???

  Dal¹í úlohou funkcí bude, ¾e budou uvnitø sebe, pomocí statické promìnné, pamatovat celkové pøíjmy a celkové výdaje.
  Tj. pokud tøikrát zavoláme prijem(1000), bude mít statická promìnná ve funkci prijem hodnotu 3000.
  Tyto celkové pøíjmy a výdaje budou zároveò návratovou hodnotou funkcí.
  Tj. po prvním zavolání prijem(1000) by funkce vrátila 1000, po druhém zavolání by vrátila 2000, po tøetím 3000.
  Funkce prijem tak v¾dy vrací souèet v¹ech pøíjmù a funkce vydaj souèet v¹ech výdajù. Pøíklad:
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

