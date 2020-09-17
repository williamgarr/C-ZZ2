#include <iostream>
#include "Point.hpp"

int Point::_compteur = 0;

Point::Point() : _x(0), _y(0)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    _compteur++;
}

Point::Point(const int x, const int y) : _x(x), _y(y)
{
    std::cout << __PRETTY_FUNCTION__ << std::endl;
    _compteur++;
}

Point::~Point()
{
    _compteur--;
}

int Point::getCompteur()
{
    return _compteur;
}

int Point::getX()
{
    return _x;
}

void Point::setX(const int x)
{
    _x = x;
}

int Point::getY()
{
    return _y;
}

void Point::setY(const int y)
{
    _y = y;
}

void Point::deplacerDe(const int x, const int y)
{
    setX(getX() + x);
    setY(getY() + y);
}

void Point::deplacerVers(const int x, const int y)
{
    setX(x);
    setY(y);
}

void Point::afficherPoint()
{
    std::cout << "X = " << getX() << " , Y = " << getY() << std::endl;
}

void Point::afficherCompteur()
{
    std::cout << "Compteur = " << getCompteur() << std::endl;
}