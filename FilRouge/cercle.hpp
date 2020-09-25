/* cercle.hpp | William Garrier | 17/09/2020 */
#ifndef CERCLE
#define CERCLE

#include <iostream>
#include <sstream>

/**
 * Name : Cercle
 * Desc : Classe décrivant une forme de type cercle
 * Var : x -> position en abscisse
 *       y -> position en ordonnée
 *       w -> largeur
 *       h -> hauteur
*/
class Cercle
{
private:
    int _x;    // X position
    int _y;    // Y position
    int _w;    // Width
    int _h;    // Height
    int ordre; // Loading order

public:
    /**
         * Constructeur par défaut de cercle (0, 0, 0, 0)
         */
    Cercle();

    /**
         * Constructeur de cercle à la position (0, 0)
         * avec une largeur w et une hauteur h 
        */
    Cercle(int w, int h);

    /**
         * Constructeur de cercle à la position (0, 0)
         * avec un rayon r 
        */
    Cercle(int rayon);

    /**
         * Constructeur de cercle à la position (x, y)
         * avec une largeur w et une hauteur h 
        */
    Cercle(int x, int y, int w, int h);

    /**
         * Constructeur de cercle à la position (x, y)
         * avec un rayon 
        */
    Cercle(int x, int y, int rayon);

    /**
         * Getter de l'attribut ordre (int)
        */
    int getOrdre();

    /**
         * Setter de l'attribut ordre (int)
        */
    void setOrdre(int n_ordre);

    /**
         * Méthode retournant une chaîne de caractére au format suivant :
         * "CERCLE [x] [y] [width] [height]"
        */
    std::string toString();
};

#endif