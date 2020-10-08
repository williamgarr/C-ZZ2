#include "forme.hpp"

int Forme::_nbFormes = 0;

Forme::Forme() : _p(Point::ORIGINE), _c(COULEURS::BLEU), _w(0), _h(0), _id(_nbFormes)
{
    _nbFormes++;
}

Forme::Forme(int w, int h) : _p(Point::ORIGINE), _c(COULEURS::BLEU), _w(w), _h(h), _id(_nbFormes)
{
    _nbFormes++;
}

Forme::Forme(Point p, COULEURS c) : _p(p), _c(c), _w(0), _h(0), _id(_nbFormes)
{
    _nbFormes++;
}

Forme::Forme(Point p, COULEURS c, int w, int h) : _p(p), _c(c), _w(w), _h(h), _id(_nbFormes)
{
    _nbFormes++;
}

Forme::~Forme() {}

void Forme::setX(int const x)
{
    _p.setX(x);
}

void Forme::setY(int const y)
{
    _p.setY(y);
}

void Forme::setCouleur(COULEURS const c)
{
    _c = c;
}

void Forme::setLargeur(int const w)
{
    _w = w;
}

void Forme::setHauteur(int const h)
{
    _h = h;
}

Point& Forme::getPoint()
{
    return _p;
}

COULEURS Forme::getCouleur() const
{
    return _c;
}

int Forme::getLargeur() const
{
    return _w;
}

int Forme::getHauteur() const
{
    return _h;
}

int Forme::getId() const
{
    return _id;
}

int Forme::prochainId()
{
    return _nbFormes;
}

/* Virtuel pure
std::string Forme::toString()
{
    std::stringstream ss;
    ss << "FORME " << getPoint().getX() << " " << getPoint().getY() << " " << getLargeur() << " " << getHauteur();
    return ss.str();
}
*/