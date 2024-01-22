#ifndef TYPEINSPECTOR_HPP
#define TYPEINSPECTOR_HPP

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

class TypeInspector {
    public :
        TypeInspector(void);
        ~TypeInspector(void);
        TypeInspector(const TypeInspector &other);
        TypeInspector &operator=(const TypeInspector &other);
        static Base *generator(void);
        static void identify(Base* p);
        static void identify(Base& p);
};

#endif