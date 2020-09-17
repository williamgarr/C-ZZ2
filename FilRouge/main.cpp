#include <iostream>
#include "rectangle.hpp"
#include "cercle.hpp"

int main(int, char **)
{
    Rectangle r1 = Rectangle(1, 2);       // 0 0 1 2
    Rectangle r2 = Rectangle(2, 3, 1, 2); // 2 3 1 2
    std::cout << r1.toString() << std::endl;
    std::cout << r2.toString() << std::endl;

    Cercle c1 = Cercle(1, 2);       // 0 0 1 2
    Cercle c2 = Cercle(15);         // 0 0 30 30
    Cercle c3 = Cercle(2, 3, 1, 2); // 2 3 1 2
    Cercle c4 = Cercle(2, 3, 15);   // 2 3 30 30
    std::cout << c1.toString() << std::endl;
    std::cout << c2.toString() << std::endl;
    std::cout << c3.toString() << std::endl;
    std::cout << c4.toString() << std::endl;
    return 0;
}