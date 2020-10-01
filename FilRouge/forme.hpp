#ifndef __CPP4__FORME_HPP__
#define __CPP4__FORME_HPP__

#include <iostream>
#include <sstream>
#include "point.hpp"

enum class COULEURS
{
    BLANC,
    NOIR,
    VERT,
    BLEU,
    ROUGE,
    JAUNE
};

class Forme
{
private:
    Point _p;
    COULEURS _c;
    int _w;
    int _h;
    int _id;
    static int _nbFormes;

public:
    Forme();
    Forme(int w, int h);
    Forme(Point p, COULEURS c);
    Forme(Point p, COULEURS c, int w, int h);
    virtual ~Forme();
    
    void setX(int const x);
    void setY(int const y);
    void setCouleur(COULEURS const c);
    void setLargeur(int const w);
    void setHauteur(int const h);

    Point& getPoint();
    COULEURS getCouleur() const;
    int getLargeur() const;
    int getHauteur() const;
    int getId() const;
    static int prochainId();

    virtual std::string toString();
};

#endif