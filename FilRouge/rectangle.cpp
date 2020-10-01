/* rectangle.cpp | William Garrier | 17/09/2020 */
#include "rectangle.hpp"

Rectangle::Rectangle() : Forme() {}

Rectangle::Rectangle(int w, int h) : Forme(w, h) {}

Rectangle::Rectangle(int x, int y, int w, int h) : Forme(Point(x, y), COULEURS::BLEU, w, h) {}

std::string Rectangle::toString()
{
    std::stringstream ss;
    ss << "RECTANGLE " << getPoint().getX() << " " << getPoint().getY() << " " << getLargeur() << " " << getHauteur();
    return ss.str();
}