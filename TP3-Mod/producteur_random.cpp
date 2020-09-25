#include "producteur_random.hpp"
#include <fstream>
#include <random>

using namespace std;

ProducteurAleatoire::ProducteurAleatoire()
{
    setTravail(0);
}

void ProducteurAleatoire::setSeed(int seed)
{
    seed = seed;
}

bool ProducteurAleatoire::produire(int quantite, std::string nom)
{
    std::ofstream fichier(nom.c_str());
    bool ret = false;
    default_random_engine re(seed);
    re.seed(seed);
    uniform_int_distribution<int> distrib { 1, 100 };

    if (!fichier.fail())
    {
        fichier << quantite << endl;
        for (int i = 1; i <= quantite; i++)
            fichier << distrib(re) << endl;
        travail++;
        ret = true;
        fichier.close();
    }

    return ret;
}