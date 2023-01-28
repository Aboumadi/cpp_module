#include "Base.hpp"

Base * generate(void)
{
    srand(time(0));
    int t = rand() % 3;
    switch (t)
    {
    case 0:
        std::cout<"the calss generat is A:";
        return new A();
    case 1:
        std::cout<"the calss generat is B:";
        return new B();
    case 2:
        std::cout<"the calss generat is C:";
        return new C();
    default:
        return NULL;
    }
}

void identify(Base* p)
{
    Base *a = dynamic_cast<A*>(p);
    if (a)
        std::cout<<"dynamic cast from generator is A"<<std::endl;
    Base *b = dynamic_cast<B*>(p);
    if (b)
        std::cout<<"dynamic cast from generator is B"<<std::endl;
    Base *c = dynamic_cast<C*>(p);
    if (c)
        std::cout<<"dynamic cast from generator is C"<<std::endl;
    else
        std::cout<<"dynamic cast was faild!!..."<<std::endl;
}

void identify(Base &p)
{
    try
    {
        Base &a = dynamic_cast<A&>(p);
        (void) a;
        std::cout<<"identification is A"<<std::endl;
    }
    catch(const std::exception &e){}
    try
    {
        Base &b = dynamic_cast<B&>(p);
        (void) b;
        std::cout<<"identification is B"<<std::endl;
    }
    catch(const std::exception& e){}
    try
    {
        Base &c = dynamic_cast<C&>(p);
        (void) c;
        std::cout<<"identification is C"<<std::endl;
        .......................
    }
    catch(const std::exception &e){}
    
}