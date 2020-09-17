/* cercle.cpp | William Garrier | 17/09/2020 */
#include "cercle.hpp"

Cercle::Cercle(int w, int h) : _x(0), _y(0), _w(w), _h(h) {}

Cercle::Cercle(int rayon) : _x(0), _y(0), _w(rayon * 2), _h(rayon * 2) {}

Cercle::Cercle(int x, int y, int w, int h) : _x(x), _y(y), _w(w), _h(h) {}

Cercle::Cercle(int x, int y, int rayon) : _x(x), _y(y), _w(rayon * 2), _h(rayon * 2) {}

std::string Cercle::toString()
{
    std::stringstream ss;
    ss << "CERCLE " << _x << " " << _y << " " << _w << " " << _h;
    return ss.str();
}