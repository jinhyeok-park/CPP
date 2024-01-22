#include "Serializer.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "check the input value" << std::endl;
        return (1);
    }
    Data *ptr;
    Data data;
    uintptr_t ret;
    data.data = av[1];
    std::cout << "input data: " << data.data << std::endl;
    ret = Serializer::serialize(&data);
    std::cout << "serialized data: " << ret << std::endl;
    ptr = Serializer::deserialize(ret);
    std::cout << "deserialized data: " << ptr->data << std::endl;
    return (0);
}