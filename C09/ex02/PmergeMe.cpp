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
        if (value < 0)
        {
            std::cout << "Error: Bad input value"<< std::endl;
			exit(0);
        }
        this->dq.push_back(value);
        this->vct.push_back(value);
    }
    MergeInsertionSort_deque();
    MergeInsertionSort_vector();
}

void    PmergeMe::MergeInsertionSort_deque()
{
    Merge_sort_deque(dq.begin(), dq.size());
    std::deque<double>::const_iterator it;
    for(it = dq.begin(); it != dq.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout <<std::endl<<"deque sort"<< std::endl;
}

void    PmergeMe::MergeInsertionSort_vector()
{
    Merge_sort_vector(vct.begin(), vct.size());
    std::vector<double>::const_iterator it;
    for(it = vct.begin(); it != vct.end(); ++it)
    {
        std::cout << *it << " ";
    }
    std::cout <<std::endl<<"vector sort"<< std::endl;
}

void    PmergeMe::Merge_sort_deque(std::deque<double>::iterator it, size_t len)
{
    static int i;

    if (len > 5)   
	{
		size_t n = len/2;
		Merge_sort_deque(it, n);
		Merge_sort_deque(it + n, len - n);
        std::cout<<"here mg_d"<<std::endl;
	}
    //else
    //{
        std::cout<<"here ins_d"<<std::endl;
	    InsertionSort_deque(it, len);
    //    return ;
    //}
}

void    PmergeMe::Merge_sort_vector(std::vector<double>::iterator it, size_t len)
{
    if (len > 5)   
	{
		size_t n = len/2;
		Merge_sort_vector(it, n);
		Merge_sort_vector(it + n, len - n);
        std::cout<<"here ins_v"<<std::endl;
	}
    //else
    //{
        std::cout<<"here ins_v"<<std::endl;
	    InsertionSort_vector(it, len);
    //    return ;
    //}
}

void    PmergeMe::InsertionSort_deque(std::deque<double>::iterator it, size_t len)
{
    for (double i = 0; i < len; i++) {
        for (double j = 1; j < len - i; j++) {
            double tmp;
            if (it[j-1] > it[j]) {
                tmp = it[j];
                it[j] = it[j-1];
                it[j-1] = tmp;
            }
        }
    }
}

void    PmergeMe::InsertionSort_vector(std::vector<double>::iterator it, size_t len)
{
    for (double i = 0; i < len; i++) {
        for (double j = 1; j < len - i; j++) {
            double tmp;
            if (it[j-1] > it[j]) {
                tmp = it[j];
                it[j] = it[j-1];
                it[j-1] = tmp;
            }
        }
    }
}
