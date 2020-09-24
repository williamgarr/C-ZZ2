#include "mere.hpp"

using namespace std;

int Mere::att_mere = 0;

Mere::Mere()
{
    att_mere++;
    cout << "Contruction de Mere (v = " << att_mere << ")" << endl;
}

Mere::Mere(std::string name) : name(name)
{
    att_mere++;
    cout << "Contruction de Mere " << getName() << " (v = " << att_mere << ")" << endl;
}

Mere::~Mere()
{
    att_mere--;
    cout << "Destruction de Mere (v = " << att_mere << ")" << endl;
}

int Mere::getAtt_Mere()
{
    return att_mere;
}

std::string Mere::getName()
{
    return name;
}

void Mere::afficher()
{
    cout << "(Mere) Att_Mere = " << getAtt_Mere() << endl;
}