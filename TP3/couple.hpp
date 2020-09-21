#ifndef COUPLE
#define COUPLE

#include <iostream>
#include "bavarde.hpp"

using namespace std;

class Couple
{
    private:
        Bavarde b1, b2;

    public:
        Couple(Bavarde b1, Bavarde b2);
        ~Couple();
};

#endif