#include "famille.hpp"

// Constructors, Destructors
Famille::Famille(int taille)
{
    bavardes = new Bavarde[taille];
}

Famille::~Famille()
{
    delete [] bavardes;
}

// Getter
Bavarde *Famille::getBavardes()
{
    return bavardes;
}