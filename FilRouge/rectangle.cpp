/* rectangle.cpp | William Garrier | 17/09/2020 */
#include "rectangle.hpp"

Rectangle::Rectangle(int w, int h) : _x(0), _y(0), _w(w), _h(h) {}

Rectangle::Rectangle(int x, int y, int w, int h) : _x(x), _y(y), _w(w), _h(h) {}

std::string Rectangle::toString()
{
    std::stringstream ss;
    ss << "RECTANGLE " << _x << " " << _y << " " << _w << " " << _h;
    return ss.str();
}