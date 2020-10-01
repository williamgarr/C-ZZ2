/* cercle.hpp | William Garrier | 17/09/2020 */
#ifndef CERCLE
#define CERCLE

#include <iostream>
#include <sstream>
#include "forme.hpp"

/**
 * Name : Cercle
 * Desc : Classe décrivant une forme de type cercle
*/
class Cercle : public Forme
{
public:
    Cercle();
    Cercle(int w, int h);
    Cercle(int rayon);
    Cercle(int x, int y, int w, int h);
    Cercle(int x, int y, int rayon);
    
    int getRayon() const;
    void setRayon(int const rayon);

    std::string toString();
};

#endif