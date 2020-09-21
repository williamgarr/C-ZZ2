#include "couple.hpp"

Couple::Couple(Bavarde b1, Bavarde b2) : b1(b1), b2(b2)
{
    cout << "Début couple " << b1.getVal() << " " << b2.getVal() << endl;    
}

Couple::~Couple()
{
    cout << "Fin couple " << b1.getVal() << " " << b2.getVal() << endl; 
}