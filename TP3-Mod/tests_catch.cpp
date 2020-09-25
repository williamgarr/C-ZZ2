#include <fstream>
#include <iostream>

#include "producteur_entier.hpp"
#include "producteur_random.hpp"
#include "statisticien.hpp"
#include "catch.hpp"

TEST_CASE("Producteur_Initialisation")
{
  ProducteurPremiersEntiers p1;
  ProducteurAleatoire p2;
  REQUIRE(p1.getTravail() == 0);
  REQUIRE(p2.getTravail() == 0);
}

TEST_CASE("Producteur_travail2")
{
  ProducteurPremiersEntiers p;
  p.produire(10, "test01.txt");
  p.produire(10, "test01.txt");
  p.produire(10, "test01.txt");
  REQUIRE(p.getTravail() == 3);
}

TEST_CASE("Producteur_Travail_Entiers")
{

  const int DEMANDE = 10;
  const std::string NOM_FICHIER("test01.txt");
  int lecture, i;
  ProducteurPremiersEntiers p;

  p.produire(DEMANDE, NOM_FICHIER.c_str());

  std::ifstream fichier(NOM_FICHIER.c_str());

  REQUIRE(fichier.is_open());

  if (!fichier.eof())
  {
    fichier >> lecture;
    REQUIRE(DEMANDE == lecture);
    for (i = 0; i < DEMANDE; ++i)
    {
      fichier >> lecture;
      REQUIRE(lecture == (i + 1));
    }

    REQUIRE(i == DEMANDE);
    // CHECK(fichier.eof());
    fichier.close();

    REQUIRE(p.getTravail() == 1);
  }
}

TEST_CASE("Producteur_Travail_Aleatoire")
{
  const int DEMANDE = 10;
  const std::string NOM_FICHIER("test02.txt");
  int lecture, i;
  ProducteurAleatoire p;
  p.setSeed(12); // définir une seed fixe
  // 26 10 92 59 19 64 52 37 51 9
  int tab[DEMANDE] = {26, 10, 92, 59, 19, 64, 52, 37, 51, 9};
  p.produire(DEMANDE, NOM_FICHIER.c_str());

  std::ifstream fichier(NOM_FICHIER.c_str());

  REQUIRE(fichier.is_open());

  if (!fichier.eof())
  {
    fichier >> lecture;
    REQUIRE(DEMANDE == lecture);
    for (i = 0; i < DEMANDE; ++i)
    {
      fichier >> lecture;
      REQUIRE(lecture == tab[i]);
    }

    REQUIRE(i == DEMANDE);
    // CHECK(fichier.eof());
    fichier.close();

    REQUIRE(p.getTravail() == 1);
  }
}

TEST_CASE("Statisticien_Initialisation")
{
  Statisticien p;
  REQUIRE_FALSE(p.aCalcule());
}

TEST_CASE("Statisticien_Travail2")
{
  Statisticien p;
  int somme;
  float moyenne;

  REQUIRE_FALSE(p.aCalcule());
  p.acquerir("test01.txt", somme, moyenne);
  // 10 1 2 3 4 5 6 7 8 9 10 => somme = 55, moyenne = 5.5
  REQUIRE(somme == 55);
  REQUIRE(moyenne == 5.5);
  REQUIRE(p.aCalcule());
}