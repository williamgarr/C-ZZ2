#include "Pile.hpp"

Pile::Pile()
{}

Pile::Pile(int const size)
{}

int Pile::size()
{
    return pile.size();
}

bool Pile::empty()
{
    return pile.empty();
}

void Pile::push(int const val) 
{
    pile.push_back(val);
}

void Pile::pop() 
{
    if(pile.size() == 0)
        throw std::invalid_argument("Trying to pop an empty stack");
    pile.pop_back();
}

int Pile::top() 
{
    if(pile.size() == 0)
        throw std::invalid_argument("Trying to get the top element of an empty stack");
    return pile.back();
}