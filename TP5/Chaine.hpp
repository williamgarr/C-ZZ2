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
        Chaine(char const * const & src);
        Chaine(int const cap);
        Chaine(Chaine const & c);
        ~Chaine();
        char* c_str() const;
        int getCapacite() const;
        void afficher(std::ostream & stream = std::cout) const;

        Chaine& operator=(Chaine const & c);
        friend std::ostream& operator<<(std::ostream& os, Chaine const & c);
        char& operator[](int const i);
        char const & operator[](int const i) const;
        friend Chaine operator+(Chaine const & c1, Chaine const & c2);
};

void afficherParValeur(Chaine const c);
void afficherParRefence(Chaine const & c);

#endif
