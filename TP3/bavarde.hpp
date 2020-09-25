#ifndef BAVARDE
#define BAVARDE

#include <iostream>

using namespace std;

class Bavarde
{
private:
    int _val;

public:
    Bavarde();
    Bavarde(int val);
    ~Bavarde();
    void afficher();
    int getVal();
};

#endif