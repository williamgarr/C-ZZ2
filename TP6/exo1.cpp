#include <iostream>

class M
{
public:
    M()
    {
        std::cout << "M::M()" << std::endl;
    }
    ~M()
    {
        std::cout << "M::~M()" << std::endl;
    }
    M(const M &)
    {
        std::cout << "M::M(const M&)" << std::endl;
    }

    M &operator=(M const &m)
    {
        if (&m != this)
        {
            std::cout << "M::operator=(M const & m)" << std::endl;
        }
        return *this;
    }
};

class A
{
public:
    M m;
    A()
    {
        std::cout << "A::A()" << std::endl;
    }
    ~A()
    {
        std::cout << "M::~M()" << std::endl;
    }
    A(const A &)
    {
        std::cout << "A::A(const A&)" << std::endl;
    }

    A &operator=(A const &a)
    {
        if (&a != this)
        {
            m = a.m;
            std::cout << "A::operator=(A const & a)" << std::endl;
        }
        return *this;
    }
};

class F : public M
{
public:
    F()
    {
        std::cout << "F::F()" << std::endl;
    }
    ~F()
    {
        std::cout << "F::~F()" << std::endl;
    }

    F(const F &f) : M(f)
    {
        std::cout << "F::F(const F&)" << std::endl;
    }

    F &operator=(F const &f)
    {
        M::operator=(f);
        if (&f != this)
        {
            std::cout << "F::operator=(F const & f)" << std::endl;
        }
        return *this;
    }
};

int main(int, char **)
{
    /*
    F f1;
    F f2 = f1;

    f1 = f2;
    */
    A a1;
    A a2 = a1;
    return 0;
}
