#include <iostream>
#include <stack>
#include <vector>

int main(int, char **)
{
    std::stack<int> is;
    std::stack<double, std::vector<double>> ds;

    // Remplissage de is
    for (int i = 0; i < 100; ++i)
        is.push(i);

    // Affichage de is et remplissage de ds
    std::cout << "Affichage de is" << std::endl;
    while (!is.empty())
    {
        std::cout << is.top() << std::endl;
        ds.push((double)is.top() * is.top());
        is.pop();
    }

    // Affichage de ds
    std::cout << "Affichage de ds" << std::endl;
    while (!ds.empty())
    {
        std::cout << ds.top() << std::endl;
        ds.pop();
    }

    return 0;
}