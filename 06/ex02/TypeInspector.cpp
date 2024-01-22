#include "TypeInspector.hpp"

TypeInspector::TypeInspector(void) {};

TypeInspector::~TypeInspector(void) {};

TypeInspector::TypeInspector(const TypeInspector &other) {
    *this = other;
}

TypeInspector &TypeInspector::operator=(const TypeInspector &other) {
    if (this != &other)
        return *this;
    return *this;
}

Base *TypeInspector::generator(void) {
    int *rand = new int;
    int val;
    val = (unsigned long)(rand) % 10000;
    if (val > 0 && val < 3333)
    {
        //std::cout << "1" << std::endl;
        return new A();
    }
    else if (val > 3332 && val < 6666)
    {
        //std::cout << "2" << std::endl;
        return new B();
    }
    else
    {
        //std::cout << "3" << std::endl;
        return new C();
    }
    delete (rand);
    return NULL;
};

void    TypeInspector::identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << "this is A class" << std::endl;
    if (dynamic_cast<B*>(p))
        std::cout << "this is B class" << std::endl;
    if (dynamic_cast<C*>(p))
        std::cout << "this is C class" << std::endl;
}

void    TypeInspector::identify(Base& p) {
    try {
        A &a = dynamic_cast<A&>(p);
        std::cout << "this is A class" << std::endl;
        (void)a;
    }
    catch (std::exception) {}
    try {
        B &b = dynamic_cast<B&>(p);
        std::cout << "this is B class" << std::endl;
        (void)b;
    }
    catch (std::exception) {}
    try {
        C &c = dynamic_cast<C&>(p);
        std::cout << "this is C class" << std::endl;
        (void)c;
    }
    catch (std::exception) {}
}
