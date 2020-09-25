/* rectangle.cpp | William Garrier | 17/09/2020 */
#include "rectangle.hpp"

Rectangle::Rectangle() : _x(0), _y(0), _w(0), _h(0), ordre(-1) {}

Rectangle::Rectangle(int w, int h) : _x(0), _y(0), _w(w), _h(h), ordre(-1) {}

Rectangle::Rectangle(int x, int y, int w, int h) : _x(x), _y(y), _w(w), _h(h), ordre(-1) {}

int Rectangle::getOrdre()
{
    return ordre;
}

void Rectangle::setOrdre(int n_ordre)
{
    ordre = n_ordre;
}

std::string Rectangle::toString()
{
    std::stringstream ss;
    ss << "RECTANGLE " << _x << " " << _y << " " << _w << " " << _h;
    return ss.str();
}