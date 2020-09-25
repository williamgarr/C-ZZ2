#ifndef LISTE_FORMES
#define LISTE_FORMES

#include <iostream>
#include "cercle.hpp"
#include "rectangle.hpp"

const int taille_max_tableau_forme = 10;

class Liste
{
    public:
        Cercle cercles[taille_max_tableau_forme];
        int nb_c;
        Rectangle rectangles[taille_max_tableau_forme];
        int nb_r;
        int compteur;

        Liste();
        int getCompteur();
        bool ajouterCercle(Cercle cercle);
        bool ajouterRectangle(Rectangle rectangle);
        std::string toString();
};

#endif