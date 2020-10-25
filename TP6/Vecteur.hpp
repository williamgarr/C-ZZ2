#ifndef VECT
#define VECT

#include <iostream>
#include <cstring>
#include <exception>

template <typename T>
class Vecteur {
    private:
        T * _tab;
        int _size;
        int _capacity;

    public:
        Vecteur();
        Vecteur(int const i);
        ~Vecteur();
        Vecteur(Vecteur<T> const & v);

        Vecteur& operator=(Vecteur<T> const & v);
        T& operator[](int const i);
        T operator[](int const i) const;
        friend std::ostream& operator<<(std::ostream & os, Vecteur<T> const & v);

        int capacity() const;
        int size() const;
        void push_back(T const val);
};

template <typename T>
Vecteur<T>::Vecteur() :
_tab(new T[10]), _size(0), _capacity(10)
{}

template <typename T>
Vecteur<T>::Vecteur(int const i) :
_tab(new T[i]), _size(0), _capacity(i)
{}

template <typename T>
Vecteur<T>::~Vecteur()
{
    delete [] _tab;
}

template <typename T>
Vecteur<T>::Vecteur(Vecteur<T> const & v) : 
_tab(new T[v.capacity()]), _size(v.size()), _capacity(v.capacity())
{
    memcpy(_tab, v._tab, sizeof(T)*size());
}

template <typename T>
Vecteur<T>& Vecteur<T>::operator=(Vecteur<T> const & v)
{
    if (&v != this)
    {
        _capacity = v.capacity();
        _size = v.size();
        _tab = new T[_capacity];
        memcpy(_tab, v._tab, sizeof(T)*size());
    }
    return *this;
}

template <typename T>
T& Vecteur<T>::operator[](int const i)
{
    if(i > capacity() || i < 0)
        throw std::out_of_range("Index out of range");
    return _tab[i];
}

template <typename T>
T Vecteur<T>::operator[](int const i) const
{
    if(i > capacity() || i < 0)
        throw std::out_of_range("Index out of range");
    return _tab[i];
}

template <typename T>
std::ostream& operator<<(std::ostream & os, Vecteur<T> const & v)
{
    for(int i = 0; i < v.size(); i++)
    {
        os << v[i] << " ";
    }
    os << std::endl;
    return os;
}

template <typename T>
int Vecteur<T>::capacity() const
{
    return _capacity;
}

template <typename T>
int Vecteur<T>::size() const
{
    return _size;
}

template <typename T>
void Vecteur<T>::push_back(T const val)
{
    if(size() == capacity()) // realloc
    {
        T * tab = new T[capacity()+5];
        memcpy(tab, _tab, sizeof(T)*capacity());
        delete [] _tab;
        _capacity += 5;
        _tab = tab;
    }
    _tab[size()] = val;
    _size++;
}


#endif