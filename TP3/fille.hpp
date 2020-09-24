#ifndef FILLE
#define FILLE

#include <iostream>
#include "mere.hpp"

class Fille : public Mere
{
    public:
        Fille();
        Fille(std::string name);
        ~Fille();
        virtual void afficher();
};

#endif