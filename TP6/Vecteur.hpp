#ifndef VECT
#define VECT

#include <iostream>
#include <cstring>

class Vecteur {
    private:
        float * _tab;
        int _size;
        int _capacity;

    public:
        Vecteur();
        Vecteur(int const i);
        ~Vecteur();
        Vecteur(Vecteur const & v);

        Vecteur& operator=(Vecteur const & v);
        float& operator[](int const i);
        float operator[](int const i) const;
        friend std::ostream& operator<<(std::ostream & os, Vecteur const & v);

        int capacity() const;
        int size() const;
        void push_back(float const val);
};

#endif