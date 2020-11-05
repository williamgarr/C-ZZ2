#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>

int main(int, char **)
{
    std::vector<int> v;
    int input;

    // Construction tableau
    while (std::cin >> input)
        v.push_back(input);

    // Trie du tableau
    std::sort(v.begin(), v.end());

    // Affichage du tableau (v1)
    std::cout << "Affichage du tableau V1" << std::endl;
    std::copy(v.begin(), v.end(),
              std::ostream_iterator<int>(std::cout, "\n"));

    // Affichage du tableau (v2)
    std::cout << "Affichage du tableau V2" << std::endl;
    std::vector<int>::const_iterator it;
    for(it = v.begin(); it != v.end(); it++)
        std::cout << *it << std::endl;

    return 0;
}