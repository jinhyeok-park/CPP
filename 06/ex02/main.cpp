#include "TypeInspector.hpp"

int main(void){

    Base *random = TypeInspector::generator();
    TypeInspector::identify(random);
    TypeInspector::identify(*random);
    delete(random);
}