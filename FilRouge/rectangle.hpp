/* rectangle.hpp | William Garrier | 17/09/2020 */
#ifndef RECTANGLE
#define RECTANGLE

#include <iostream>
#include <sstream>
#include "forme.hpp"

/**
 * Name : Rectangle
 * Desc : Classe décrivant une forme de type rectangle
*/
class Rectangle : public Forme
{
public:
    Rectangle();
    Rectangle(int w, int h);
    Rectangle(int x, int y, int w, int h);
    std::string toString();
};

#endif