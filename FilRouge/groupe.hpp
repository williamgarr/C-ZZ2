#ifndef GROUPE_FORMES
#define GROUPE_FORMES

#include <iostream>
#include "forme.hpp"
#include "cercle.hpp"
#include "rectangle.hpp"

const int taille_max_tableau_forme = 100;

class Groupe : public Forme
{
    public:
        Forme * formes[taille_max_tableau_forme];
        int nb_forme;
        int max_x, max_y;

        Groupe();
        bool ajouterForme(Forme * forme);
        std::string toString();
};

#endif