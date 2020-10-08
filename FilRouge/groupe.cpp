#include <sstream>
#include "groupe.hpp"

Groupe::Groupe() : Forme(), nb_forme(0),
                   max_x(0), max_y(0) {}

bool Groupe::ajouterForme(Forme * forme)
{
    bool ret = false;
    if (nb_forme < taille_max_tableau_forme)
    {
        formes[nb_forme] = forme;
        nb_forme++;
        ret = true;
        int f_x = forme->getPoint().getX();
        int f_y = forme->getPoint().getY();
        int f_w = forme->getLargeur();
        int f_h = forme->getHauteur();

        // Cas d'une seule forme
        if (nb_forme == 1)
        {
            getPoint().setX(f_x);
            getPoint().setY(f_y);
            setLargeur(f_w);
            setHauteur(f_h);
            // Point à l'extremité bas droite
            max_x = getPoint().getX() + getLargeur();
            max_y = getPoint().getY() + getHauteur();
        }
        else
        {
            // Sinon mise à jour des valeurs si besoin
            if (f_x < getPoint().getX()) // maj x
                getPoint().setX(f_x);   
            if (max_x < f_x + f_w) // maj max_x
                max_x = f_x + f_w;
            if (f_y < getPoint().getY()) // maj y
                getPoint().setY(f_y);
            if (max_y < f_y + f_h) // maj max_y
                max_y = f_y + f_h;
            if (getLargeur() < max_x - getPoint().getX()) // maj largeur
                setLargeur(max_x - getPoint().getX());
            if (getHauteur() < max_y - getPoint().getY()) // maj hauteur
                setHauteur(max_y - getPoint().getY()); 
        }
    }
    return ret;
}

std::string Groupe::toString()
{
    std::stringstream ss;
    ss << "GROUPE " << getPoint().getX() 
    << " " << getPoint().getY()
    << " " << getLargeur()
    << " " << getHauteur() << std::endl;
    for (int i = 0; i < nb_forme; i++)
    {
        ss << formes[i]->toString() << std::endl;
    }
    return ss.str();
}