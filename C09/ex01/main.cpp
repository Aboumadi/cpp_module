#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout<<"Error: Bad Arguments"<<std::endl;
        exit (EXIT_FAILURE);
    }
    RPN rp;
    rp.operations(av[1]);
    return 0;
}