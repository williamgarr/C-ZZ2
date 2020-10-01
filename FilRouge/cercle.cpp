/* cercle.cpp | William Garrier | 17/09/2020 */
#include "cercle.hpp"

Cercle::Cercle() : Forme() {}

Cercle::Cercle(int w, int h) : Forme(w, h) {}

Cercle::Cercle(int rayon) : Forme(rayon*2, rayon*2) {}

Cercle::Cercle(int x, int y, int w, int h) : Forme(Point(x, y), COULEURS::BLEU, w, h) {}

Cercle::Cercle(int x, int y, int rayon) : Forme(Point(x, y), COULEURS::BLEU, rayon*2, rayon*2) {}

int Cercle::getRayon() const
{
    if(getLargeur() == getHauteur())
        return getHauteur()/2;
    else
        return -1;
}

void Cercle::setRayon(int const rayon)
{
    setLargeur(rayon*2);
    setHauteur(rayon*2);
}

std::string Cercle::toString()
{
    std::stringstream ss;
    ss << "CERCLE " << getPoint().getX() << " " << getPoint().getX() << " " << getLargeur() << " " << getHauteur();
    return ss.str();
}