#include "producteur_entier.hpp"
#include <fstream>

ProducteurPremiersEntiers::ProducteurPremiersEntiers()
{
    setTravail(0);
}

bool ProducteurPremiersEntiers::produire(int quantite, std::string nom)
{
    std::ofstream fichier(nom.c_str());
    bool ret = false;

    if (!fichier.fail())
    {
        fichier << quantite << std::endl;
        for (int i = 1; i <= quantite; i++)
            fichier << i << std::endl;
        travail++;
        ret = true;
        fichier.close();
    }

    return ret;
}