#include "Chaine.hpp"
#include <cstring>
#include <sstream>

Chaine::Chaine() : tab(nullptr), capacite(-1) {}

Chaine::Chaine(char * src) : tab(src), capacite(strlen(src)) {}

Chaine::Chaine(int cap) : tab("\0"), capacite(cap) {}

char* Chaine::c_str() const
{
    return tab;
}

int Chaine::getCapacite() const
{
    return capacite;
}