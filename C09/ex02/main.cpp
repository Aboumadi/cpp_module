#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac <= 1)
    {
        std::cout<<"Error: Bad Arguments"<<std::endl;
        exit (EXIT_FAILURE);
    }
    PmergeMe mg(ac, av);
    mg.Merge_sort_deque(mg.dq.begin(), mg.dq.size());
    return 0;
}