#include <iostream>

class Base {
    protected :
    int a;
    int b;
    public :
    Base(void) {
        a = 0;
    };
};

class A : virtual public Base {
    public :
    A(void) {
        this->a = 2;
    };
};

class B : virtual public Base {
    public : 
    B(void) {
        this->b = 4;
    };
};

class C : public B, public A {
    public :
    C(void) {
        std::cout << A::a << std::endl;
        std::cout << B::a << std::endl;
        std::cout << this->a;
        std::cout << this->b;
    }
};

int main(void)
{
    C test;
}