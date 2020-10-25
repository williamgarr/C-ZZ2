#include "catch.hpp"
#include <cstring>
#include <sstream> // a mettre en commentaire
#include "Chaine.hpp"
#include "Vecteur.hpp"
#include "Pile.hpp"

TEST_CASE("Constructeur par defaut")
{
    Chaine c;
    CHECK(-1 == c.getCapacite());
    CHECK(NULL == c.c_str()); // 0, NULL, ou nullptr
}

TEST_CASE("Verification des const sur les accesseurs")
{
    const Chaine c;
    CHECK(-1 == c.getCapacite());
    CHECK(0 == c.c_str()); // 0, NULL, ou nullptr
}

TEST_CASE("Constructeur par chaine C")
{
    char source[] = "rien";
    Chaine c1(source);
    CHECK((signed)strlen(source) == c1.getCapacite());
    CHECK(0 == strcmp(source, c1.c_str()));

    Chaine c2 = "";
    CHECK(0 == c2.getCapacite());
    CHECK(0 == strcmp("", c2.c_str()));

    // Verifier que la liberation memoire est bien faite
}

TEST_CASE("Constructeur avec capacite")
{
    Chaine c1(6);
    CHECK(6 == c1.getCapacite());
    CHECK(0 == strlen(c1.c_str()));

    // Verifier que la liberation memoire est bien faite
}

TEST_CASE("Constructeur de copie")
{
    Chaine s1(10);  // une chaine vide
    Chaine s2 = s1; // une autre chaine vide

    CHECK(s1.getCapacite() == s2.getCapacite());
    // tous les problemes vont venir de la
    // j'ai converti en void * uniquement pour l'affichage de catch
    CHECK((void *)s1.c_str() != (void *)s2.c_str());
    CHECK(0 == strcmp(s1.c_str(), s2.c_str()));
}

TEST_CASE("methode afficher")
{
    const char *original = "une chaine a tester";
    const Chaine c1(original);
    std::stringstream ss;

    c1.afficher(); // on verifie juste que ca compile
    c1.afficher(ss);

    CHECK(ss.str() == original); // test de std::string :-)
}

TEST_CASE("operateur d'affectation")
{
    Chaine s1("une premiere chaine");
    Chaine s2("une deuxieme chaine plus longue que la premiere");

    s1 = s2;

    CHECK(s1.getCapacite() == s2.getCapacite());
    CHECK((void *)s1.c_str() != (void *)s2.c_str());
    CHECK(0 == strcmp(s1.c_str(), s2.c_str()));

    s1 = s1; // est ce que cela va survivre a l execution ?
}

TEST_CASE("Affichage valeur/reference")
{
    Chaine s1("une premiere chaine");
    afficherParValeur(s1);
    afficherParRefence(s1);
}
/*
TEST_CASE("Surcharge <<") {
	const char * chaine = "une nouvelle surcharge";
	Chaine s(chaine);
    std::stringstream ss;
    ss << s;  // :-)

    CHECK( ss.str() == chaine ); //  test de std::string, again :-))
}*/

TEST_CASE("Surcharge [] modif")
{
    Chaine s1("toto");
    s1[0] = 'd';

    CHECK(0 == strcmp(s1.c_str(), "doto"));
}

TEST_CASE("Surchage << v2")
{
    const char *chaine = "Toto";
    const char *chaine2 = "T\no\nt\no";
    Chaine s(chaine);
    std::stringstream ss;
    ss << s; // :-)

    CHECK(ss.str() == chaine2); //  test de std::string, again :-))
}

TEST_CASE("Surcharge +")
{
    const char *chaine1 = "Toto";
    const char *chaine2 = "Doto";
    const char *chaine3 = "TotoDoto";
    Chaine s1(chaine1);
    Chaine s2(chaine2);

    CHECK(0 == strcmp((s1 + s2).c_str(), chaine3));
}

TEST_CASE("Vecteur1")
{
    const Vecteur<int> v;

    REQUIRE(v.capacity() >= 10);
    REQUIRE(v.size() == 0);
}

TEST_CASE("Vecteur2")
{
    Vecteur<int> v(20);

    REQUIRE(v.capacity() == 20);
    REQUIRE(v.size() == 0);
}

TEST_CASE("Vecteur3")
{
    Vecteur<int> v(5);

    SECTION("ajout de quelques elements")
    {
        REQUIRE(v.capacity() == 5);

        for (int i = 0; i < 4; ++i)
            v.push_back(i);

        REQUIRE(v.size() == 4);
    }

    SECTION("tableau un peu agrandi")
    {
        // on peut verifier que vecteur est bien un nouveau :-)
        REQUIRE(v.capacity() == 5);
        for (int i = 0; i < 6; ++i)
            v.push_back(i);

        REQUIRE(v.capacity() == 10);
        REQUIRE(v.size() == 6);
    }

    SECTION("on verifie les valeurs dans le vecteur")
    {
        for (int i = 0; i < 25; ++i)
            v.push_back(i);

        REQUIRE(v.capacity() == 25);
        REQUIRE(v.size() == 25);

        for (int i = 0; i < 25; ++i)
            CHECK(v[i] == i);
    }

    SECTION("on verifie les exceptions")
    {
        REQUIRE_THROWS_AS(v[-1] == 0, std::out_of_range &);
        REQUIRE_THROWS_AS(v[6] == 0, std::out_of_range &); 
    }
}

TEST_CASE("Constructeur par defaut Pile") {
   Pile p; // cela implique que par defaut la capacite de la pile n'est pas nulle => pas d exception
   
   CHECK(  p.empty() );
   CHECK(  0 == p.size() );
}

/* A faire quand on aura vu les exceptions
TEST_CASE("Exceptions de mauvaise construction") {

   REQUIRE_THROWS_AS( Pile(-1).empty(), std::invalid_argument );
   REQUIRE_THROWS_AS( Pile( 0).empty(), std::invalid_argument );
   
} */

/* A faire quand on aura vu les exceptions
TEST_CASE("Exception pile vide") {

   REQUIRE_THROWS_AS( Pile().pop(), std::invalid_argument);
   
} */

TEST_CASE("Live pile") {
    Pile p(10);

    CHECK(  p.empty() );
    CHECK(  0 == p.size() );

    p.push(5);

    CHECK( !p.empty() );
    CHECK( 1 == p.size() );
    CHECK( 5 == p.top() );

    p.push(2);
    p.push(1);

    CHECK( 3 == p.size() );
    CHECK( 1 == p.top() );

    p.pop();

    CHECK( 2 == p.size() );
    CHECK( 2 == p.top() );

    p.pop();
    p.pop();

    CHECK( 0 == p.size() );

}
