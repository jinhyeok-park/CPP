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
    private :
    int a;
    public :
    A(void) {
        this->a = 2;
        Base::a = 4;
    };
    int getA() {
        return this->a;
    }
};

class B : virtual public Base {
    public : 
    B(void) {
        this->b = 4;
    };
};

class C : public B, public A {
    public :
    C(void): B(), A(){
        Base::a = getA();
        std::cout << Base::a;
    }
};

int main(void)
{
    C test;
}