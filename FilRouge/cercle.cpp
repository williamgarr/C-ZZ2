/* cercle.cpp | William Garrier | 17/09/2020 */
#include "cercle.hpp"

Cercle::Cercle() : _x(0), _y(0), _w(0), _h(0), ordre(-1) {}

Cercle::Cercle(int w, int h) : _x(0), _y(0), _w(w), _h(h), ordre(-1) {}

Cercle::Cercle(int rayon) : _x(0), _y(0), _w(rayon * 2), _h(rayon * 2), ordre(-1) {}

Cercle::Cercle(int x, int y, int w, int h) : _x(x), _y(y), _w(w), _h(h), ordre(-1) {}

Cercle::Cercle(int x, int y, int rayon) : _x(x), _y(y), _w(rayon * 2), _h(rayon * 2), ordre(-1) {}

int Cercle::getOrdre()
{
    return ordre;
}

void Cercle::setOrdre(int n_ordre)
{
    ordre = n_ordre;
}

std::string Cercle::toString()
{
    std::stringstream ss;
    ss << "CERCLE " << _x << " " << _y << " " << _w << " " << _h;
    return ss.str();
}