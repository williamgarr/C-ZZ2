#include "bavarde.hpp"
#include "couple.hpp"

int main(int, char **)
{
    /* ETAPE 1
    Bavarde b;
    Bavarde *p = new Bavarde(3);
    fonction(b);
    delete p;
    */

    /* ETAPE 2
    const int TAILLE = 20;
    Bavarde tab1[TAILLE];
    Bavarde *tab2 = new Bavarde[TAILLE];

    for (int i = 0; i < TAILLE; ++i)
    {
        tab1[i].afficher();
        tab2[i].afficher();
    }

    delete [] tab2;
    */

    /* ETAPE 3 */
    Couple c = Couple(Bavarde(1), Bavarde(2));
    return 0;
}