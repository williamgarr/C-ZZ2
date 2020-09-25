#ifndef __CPP3_STATISTICIEN_HPP__
#define __CPP3_STATISTICIEN_HPP__

#include <iostream>

class Statisticien
{
private:
    bool calcul;

public:
    Statisticien();
    bool aCalcule();
    void acquerir(std::string nom, int &somme, float &moyenne);
};

#endif