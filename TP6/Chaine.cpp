#include "Chaine.hpp"
#include <cstring>
#include <sstream>

Chaine::Chaine() : tab(nullptr), capacite(-1) {}

Chaine::Chaine(char const * const & src) : tab(new char[strlen(src)+1]), capacite(strlen(src)) 
{
    strcpy(tab, src);
}

Chaine::Chaine(int const cap) : tab(new char[1]), capacite(cap) 
{
    strcpy(tab, "\0");
}

Chaine::Chaine(Chaine const & c) : tab(new char[c.getCapacite()+1]), capacite(c.getCapacite()) 
{
    strcpy(tab, c.c_str());
    std::cout << "Constructeur de copie appelé !" << std::endl;
}

Chaine::~Chaine()
{
    delete [] tab;
}

char* Chaine::c_str() const
{
    return tab;
}

int Chaine::getCapacite() const
{
    return capacite;
}

void Chaine::afficher(std::ostream & stream) const
{
    stream << c_str();
}

void afficherParValeur(Chaine const c)
{
    c.afficher();
}

void afficherParRefence(Chaine const & c)
{
    c.afficher();
}

Chaine& Chaine::operator=(Chaine const & c)
{
    if (&c != this)
    {
        capacite = c.getCapacite();
        delete [] tab;
        tab = new char[c.getCapacite()+1];
        strcpy(tab, c.tab);
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, Chaine const & c)
{
    for(int i=0; i<c.getCapacite()-1; i++)
        os << c[i] << std::endl;
    os << c[c.getCapacite()-1];
    return os;
}

char& Chaine::operator[](int const i)
{
    return tab[i];
}

char const & Chaine::operator[](int const i) const
{
    return tab[i];
}

Chaine operator+(Chaine const & c1, Chaine const & c2)
{
    Chaine c3(c1.getCapacite()+c2.getCapacite());
    strcpy(c3.tab, c1.tab);
    strcat(c3.tab, c2.tab);
    return c3;
}