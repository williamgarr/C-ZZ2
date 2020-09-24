#include <cstdlib>

#include "bavarde.hpp"
#include "couple.hpp"
#include "famille.hpp"
#include "mere.hpp"
#include "fille.hpp"

using namespace std;

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

    /* ETAPE 3 
    Couple c = Couple(Bavarde(1), Bavarde(2));
    */

    /* ETAPE 4 
    Famille f = Famille(5);
    (f.getBavardes())[0] = Bavarde(0);
    (f.getBavardes())[1] = Bavarde(1);
    (f.getBavardes())[2] = Bavarde(2);
    (f.getBavardes())[0].afficher();
    (f.getBavardes())[1].afficher();
    (f.getBavardes())[2].afficher();
    */

    /* ETAPE 5 
    Bavarde * b = (Bavarde*) malloc(sizeof(Bavarde));
    cout << b->getVal() << endl;
    // /!\ malloc ne peut pas utiliser de constructeurs
    */

    /* ETAPE 6 
    Fille f = Fille("Marie");
    f.afficher();
    Fille f2;
    f2.afficher();
    Mere m = Mere("Mama");
    m.afficher();
    cout << "Name m = " << m.getName() << endl;
    cout << "Name f = " << f.getName() << endl;
    cout << "(Main) Att_Mere = " << Mere::getAtt_Mere() << endl << endl;
    // (1) Utilise le constructeur et detsructeur par défaut de Mere
    // (2) Construit la mere puis la fille et detruit la fille puis la mere

    Mere *pm = new Mere("mere_dyn");
    Fille *pf = new Fille("fille_dyn");
    Mere *pp = new Fille("fille vue comme mere");
    pm->afficher(); // affiche Mere
    pf->afficher(); // affiche Fille
    pp->afficher(); // affiche Fille
    */

    /* ETAPE 7 */
    
    return 0;
}