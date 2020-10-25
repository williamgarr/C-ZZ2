#ifndef __PILE_CPP__
#define __PILE_CPP__

#include <iostream>
#include <vector>

class Pile
{
private:
    std::vector<int> pile;

public:
    Pile();
    Pile(int const size); // useless
    int size();
    bool empty();
    void push(int const val);
    void pop();
    int top();
};

#endif