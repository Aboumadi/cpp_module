#include "PmergeMe.hpp"

PmergeMe::PmergeMe(/* args */)
{
}

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
    *this = copy;
}

PmergeMe PmergeMe::operator=(const PmergeMe &other)
{
    *this = other;
    return (*this);
}

PmergeMe::PmergeMe(int ac, char **av)
{
    int value;
    for (int i = 1; i < ac; ++i)
    {
        value = atoi(av[i]);
        if (value <= 0)
        {
            std::cout << "Error: Bad input value"<< std::endl;
			exit(0);
        }
        this->dq.push_back(value);
        this->lst.push_back(value);
    }
}

template <typename T>
void PmergeMe::Merge_sort(T &container)
{
    template <typename T>
}