#ifndef __CPP3_PRODUCTEUR_ENTIER_HPP__
#define __CPP3_PRODUCTEUR__ENTIER_HPP__

#include <iostream>
#include "producteur.hpp"

class ProducteurPremiersEntiers : public Producteur
{
public:
    ProducteurPremiersEntiers();
    virtual bool produire(int quantite, std::string nom);
};

#endif
