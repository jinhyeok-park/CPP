#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <cstdint>

struct Data {
    std::string data;
};

class  Serializer {
    public :
        Serializer(void);
        ~Serializer(void);
        static uintptr_t serialize(Data *ptr);
        static Data *deserialize(uintptr_t raw);
        Serializer(const Serializer & other);
        Serializer &operator=(const Serializer &other);
};

#endif