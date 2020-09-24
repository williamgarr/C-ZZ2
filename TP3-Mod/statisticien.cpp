#include "statisticien.hpp"
#include <fstream>

Statisticien::Statisticien() : calcul(false) {}

bool Statisticien::aCalcule()
{
    return calcul;
}

void Statisticien::acquerir(std::string nom, int &somme, float &moyenne)
{
	std::ifstream fichier(nom.c_str());
    int quantite, lecture;
    somme = 0;

    if(!fichier.fail())
    {
        fichier >> quantite;
        for(int i=1; i<=quantite; i++)
        {
            fichier >> lecture;
            somme += lecture;
        }
        moyenne = (float) somme / quantite;
        calcul = true;
    }
}