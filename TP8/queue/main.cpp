#include "ZZ.hpp"
#include <queue>

int main(int, char **)
{
    // TESTS CLASSE ZZ
    ZZ z1 = ZZ("Moran", "Bob", 15);
    ZZ z2 = ZZ("Garrier", "William", 15);

    std::cout << z1 << z2;

    if (z1 < z2)
        std::cout << "z1 < z2" << std::endl;
    else
        std::cout << "z1 >= z2" << std::endl;

    std::priority_queue<ZZ> queue;
    queue.push(ZZ("Garrier", "William", 15));
    queue.push(ZZ("Davies", "Rhys", 16));
    queue.push(ZZ("Becouze", "Florent", 13));
    queue.push(ZZ("Garrier", "William", 11));
    queue.push(ZZ("Garrier", "William", 19));

    while(!queue.empty())
    {
        std::cout << queue.top();
        queue.pop();
    }
    std::cout << std::endl;

    return 0;
}