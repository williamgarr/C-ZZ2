#ifndef MERE
#define MERE

#include <iostream>

class Mere
{
private:
    static int att_mere;
    std::string name;

public:
    Mere();
    Mere(std::string name);
    ~Mere();
    static int getAtt_Mere();
    virtual void afficher();
    std::string getName();
};

#endif