/* rectangle.hpp | William Garrier | 17/09/2020 */
#ifndef RECTANGLE
#define RECTANGLE

#include <iostream>
#include <sstream>

/**
 * Name : Rectangle
 * Desc : Classe décrivant une forme de type rectangle
 * Var : x -> position en abscisse
 *       y -> position en ordonnée
 *       w -> largeur
 *       h -> hauteur
*/
class Rectangle
{
private:
    int _x; // X position
    int _y; // Y position
    int _w; // Width
    int _h; // Height
    int ordre;

public:
    /**
         * Constructeur par défaut de rectangle (0, 0, 0, 0)
         */ 
    Rectangle();

    /**
         * Constructeur de rectangle à la position (0, 0)
         * avec une largeur w et une hauteur h 
        */
    Rectangle(int w, int h);

    /**
         * Constructeur de rectangle à la position (x, y)
         * avec une largeur w et une hauteur h 
        */
    Rectangle(int x, int y, int w, int h);

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
         * "RECTANGLE [x] [y] [width] [height]"
        */
    std::string toString();
};

#endif