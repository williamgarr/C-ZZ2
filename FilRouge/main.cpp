/* FICHIER OBSOLETE -> utilisation de tests unitaires
#include <iostream>
#include "rectangle.hpp"
#include "cercle.hpp"
#include "liste.hpp"

using namespace std;

int main(int, char **)
{
    Rectangle r1 = Rectangle(1, 2);       // 0 0 1 2
    Rectangle r2 = Rectangle(2, 3, 1, 2); // 2 3 1 2
    Cercle c1 = Cercle(1, 2);       // 0 0 1 2
    Cercle c2 = Cercle(15);         // 0 0 30 30
    Cercle c3 = Cercle(2, 3, 1, 2); // 2 3 1 2
    Cercle c4 = Cercle(2, 3, 15);   // 2 3 30 30
    Liste l;
    l.ajouterCercle(c2);
    l.ajouterRectangle(r1);
    l.ajouterCercle(c1);
    l.ajouterCercle(c3);
    l.ajouterRectangle(r2);
    l.ajouterCercle(c4);

    std::cout << l.toString(); // OK

    return 0;
}
*/