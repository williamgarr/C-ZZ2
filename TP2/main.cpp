#include <iostream>
#include "Point.hpp"

int main(int, char**) {
    /*
    Point p;
    p.afficherPoint();
    p.deplacerVers(1, 1);
    p.afficherPoint();
    p.deplacerDe(3, 4);
    p.afficherPoint();
    */

    Point p1;
    Point::afficherCompteur();
    Point p2 = Point(2, 3);
    Point::afficherCompteur();
    Point * p3 = new Point(5, 5);
    Point::afficherCompteur();
    p1.afficherPoint();
    p2.afficherPoint();
    p3->afficherPoint();
    delete p3;
    Point::afficherCompteur();

    return 0;
}