#include <iostream>
#include <stdint.h>
#include <string>
#include <stdio.h>

struct Data
{
    int n;
    int b;
};

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}

int main()
{
    Data d;
    d.b = 15;
    d.n = 12;

    uintptr_t p = serialize(&d);
    std::cout<<p<<std::endl;
    printf("%p\n", &p);
    std::cout<<"-----------"<<std::endl;
    Data *ptr = deserialize(p);
    printf("%p\n", &ptr);
    std::cout<<ptr->b<<std::endl;
    std::cout<<ptr->n<<std::endl;
}