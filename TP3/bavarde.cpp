#include <iostream>

class Bavarde
{
private:
    int _val;

public:
    Bavarde();
    Bavarde(int val);
    ~Bavarde();
} bizarre(1);

Bavarde::Bavarde() : _val(0)
{
    std::cout << "Construction de " << _val << std::endl;
}

Bavarde::Bavarde(int val) : _val(val)
{
    std::cout << "Construction de " << _val << std::endl;
}

Bavarde::~Bavarde()
{
    std::cout << "Tais-toi " << _val << std::endl;
}

Bavarde globale(2);

void fonction(Bavarde b)
{
    std::cout << "code de la fonction";
}

int main(int, char **)
{
    Bavarde b;
    Bavarde *p = new Bavarde(3);
    fonction(b);
    delete p;
    return 0;
}