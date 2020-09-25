#ifndef __CPP3_PRODUCTEUR_HPP__
#define __CPP3_PRODUCTEUR_HPP__

#include <iostream>

class Producteur
{
protected:
    int travail;

public:
    Producteur() : travail(0) {}
    int getTravail()
    {
        return travail;
    }

    void setTravail(int travail)
    {
        travail = travail;
    }
    
    virtual bool produire(int quantite, std::string nom) = 0;
};

#endif
