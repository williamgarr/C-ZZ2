#ifndef CPP5__CHAINE_HPP
#define CPP5__CHAINE_HPP

#include <iostream>
#include <fstream>

class Chaine {
    private:
        char * tab;
        int capacite;

    public:
        Chaine();
        Chaine(char * src);
        Chaine(int cap);
        char* c_str() const;
        int getCapacite() const;

};

#endif
