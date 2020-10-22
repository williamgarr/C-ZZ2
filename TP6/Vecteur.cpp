#include "Vecteur.hpp"

Vecteur::Vecteur() :
_tab(new float[10]), _size(0), _capacity(10)
{}

Vecteur::Vecteur(int const i) :
_tab(new float[i]), _size(0), _capacity(i)
{}

Vecteur::~Vecteur()
{
    delete [] _tab;
}

Vecteur::Vecteur(Vecteur const & v) : 
_tab(new float[v.capacity()]), _size(v.size()), _capacity(v.capacity())
{
    memcpy(_tab, v._tab, sizeof(float)*size());
}

Vecteur& Vecteur::operator=(Vecteur const & v)
{
    if (&v != this)
    {
        _capacity = v.capacity();
        _size = v.size();
        _tab = new float[_capacity];
        memcpy(_tab, v._tab, sizeof(float)*size());
    }
    return *this;
}

float& Vecteur::operator[](int const i)
{
    if(i > capacity() || i < 0)
        throw std::out_of_range("Index out of range");
    return _tab[i];
}

float Vecteur::operator[](int const i) const
{
    if(i > capacity() || i < 0)
        throw std::out_of_range("Index out of range");
    return _tab[i];
}

std::ostream& operator<<(std::ostream & os, Vecteur const & v)
{
    for(int i = 0; i < v.size(); i++)
    {
        os << v[i] << " ";
    }
    os << std::endl;
    return os;
}

int Vecteur::capacity() const
{
    return _capacity;
}

int Vecteur::size() const
{
    return _size;
}

void Vecteur::push_back(float const val)
{
    if(size() == capacity()) // realloc
    {
        float * tab = new float[capacity()+5];
        memcpy(tab, _tab, sizeof(float)*capacity());
        delete [] _tab;
        _capacity += 5;
        _tab = tab;
    }
    _tab[size()] = val;
    _size++;
}