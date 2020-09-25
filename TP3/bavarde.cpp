#include <iostream>

#include "bavarde.hpp"

Bavarde::Bavarde() : _val(0)
{
    std::cout << "Construction de " << _val << std::endl;
}

Bavarde::Bavarde(int val) : _val(val)
{
    std::cout << "Construction de " << _val << std::endl;
}

Bavarde::~Bavarde()
{
    std::cout << "Tais-toi " << _val << std::endl;
}

void Bavarde::afficher()
{
    cout << "Affichage de " << _val << endl;
}

int Bavarde::getVal()
{
    return _val;
}