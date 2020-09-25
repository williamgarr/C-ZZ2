#ifndef __CPP3_PRODUCTEUR_RANDOM_HPP__
#define __CPP3_PRODUCTEUR__RANDOM_HPP__

#include <iostream>
#include "producteur.hpp"

class ProducteurAleatoire : public Producteur
{
private:
    int seed;

public:
    void setSeed(int seed);
    ProducteurAleatoire();
    virtual bool produire(int quantite, std::string nom);
};

#endif