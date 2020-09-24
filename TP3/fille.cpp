#include "fille.hpp"

using namespace std;

Fille::Fille() : Mere()
{
    cout << "Constructeur de Fille" << endl;
}

Fille::Fille(std::string name) : Mere(name)
{
    cout << "Constructeur de Fille " << getName() << endl;
}

Fille::~Fille()
{
    cout << "Destructeur de Fille" << endl;
}

void Fille::afficher()
{
    cout << "(Fille) Att_Mere = " << getAtt_Mere() << endl;
}