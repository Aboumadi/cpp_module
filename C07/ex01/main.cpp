#include "iter.hpp"


template <typename T> 
void print_elm(T a)
{
    a++;
    std::cout << a << std::endl;
}

int main()
{
    std::string const p[3] = {"test1","test2","test3"};
    int t1[3] = {1,2,3};

    //iter(p,3,print_elm);
    std::cout << std::endl;
    iter(t1,3,print_elm);
    std::cout<<t1[0]<<std::endl;

}