#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout<<"Error: Bad Arguments"<<std::endl;
        exit (EXIT_FAILURE);
    }
    PmergeMe mg(ac, av);
    return 0;
}