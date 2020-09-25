#include <sstream>
#include "liste.hpp"

Liste::Liste() : nb_c(0), nb_r(0), compteur(0) {}

int Liste::getCompteur()
{
    return compteur;
}

bool Liste::ajouterCercle(Cercle cercle)
{

    bool ret = false;
    if (nb_c < taille_max_tableau_forme)
    {
        compteur++;
        cercle.setOrdre(compteur);
        cercles[nb_c] = cercle;
        nb_c++;
        ret = true;
    }
    return ret;
}

bool Liste::ajouterRectangle(Rectangle rectangle)
{
    bool ret = false;
    if (nb_r < taille_max_tableau_forme)
    {
        compteur++;
        rectangle.setOrdre(compteur);
        rectangles[nb_r] = rectangle;
        nb_r++;
        ret = true;
    }
    return ret;
}

std::string Liste::toString()
{
    std::stringstream ss;
    int i_r = 0, i_c = 0;
    for(int i=1; i<=compteur; i++)
    {
        if(cercles[i_c].getOrdre() == i)
        {
            ss << cercles[i_c].toString() << std::endl;
            i_c++;
        }
        if(rectangles[i_r].getOrdre() == i)
        {
            ss << rectangles[i_r].toString() << std::endl;
            i_r++;
        }
    }
    return ss.str();
}