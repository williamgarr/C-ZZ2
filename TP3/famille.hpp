#ifndef FAMILLE
#define FAMILLE

#include <iostream>
#include "bavarde.hpp"

class Famille
{
private:
    Bavarde *bavardes;

public:
    // Constructors, Destructors
    Famille(int taille);
    ~Famille();

    // Getter
    Bavarde *getBavardes();
};

#endif