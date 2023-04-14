#include "PmergeMe.hpp"
#include <ctime>
#include <deque>
#include <sys/_types/_clock_t.h>
#include <sys/_types/_size_t.h>
#include <vector>

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
    std::vector<double>::iterator itv;
    std::deque<double>::iterator itd;
    std::list<double> lst;
    std::list<double>::iterator itl;
    std::cout<<"Befor:";
    for (int i = 1; i < ac; ++i)
    {
        value = atoi(av[i]);
        if (value < 0)
        {
            std::cout << "Error: Bad input value"<< std::endl;
			exit(0);
        }
        lst.push_back(value);
    }
    for (itl = lst.begin(); itl != lst.end() ; ++itl)
        std::cout << " " << *itl;
    std::cout<<std::endl;
    clock_t start1 = clock();
    for (itl = lst.begin(); itl != lst.end() ; ++itl)
    {
        value = *itl;
        this->dq.push_back(value);
    }
    MergeInsertionSort_deque();
    clock_t end1 = clock();
     std::cout<<"after:";
    for(itd = dq.begin(); itd != dq.end(); ++itd)
        std::cout << " " << *itd;
    std::cout<<std::endl;

    clock_t start2 = clock();
    for (itl = lst.begin(); itl != lst.end() ; ++itl)
    {
        value = *itl;
        this->vct.push_back(value);
    }
    MergeInsertionSort_vector();
    clock_t end2 = clock();
    double T = static_cast<double>(end1 - start1) / CLOCKS_PER_SEC;
     std::cout<< std::fixed << std::setprecision(5) <<"Time to process a range of " <<dq.size() << " elements with std::deque : "<<T<<" us"<< std::endl;
    double T2 = static_cast<double>(end2 - start2) / CLOCKS_PER_SEC;
    std::cout<< std::fixed << std::setprecision(5) <<"Time to process a range of " <<vct.size() << " elements with std::vector : "<<T2<<" us"<< std::endl;
}

void    PmergeMe::MergeInsertionSort_deque()
{
    Merge_sort_deque(dq.begin(), dq.size());
    std::deque<double>::const_iterator it;
}

void    PmergeMe::MergeInsertionSort_vector()
{
    Merge_sort_vector(vct.begin(), vct.size());
    std::vector<double>::const_iterator it;
}

void    PmergeMe::Merge_sort_deque(std::deque<double>::iterator it, size_t len)
{
    if (len > 10)   
	{
    size_t n = (len/2);
    Merge_sort_deque(it, n);
    Merge_sort_deque(it + n, len - n);
	}
	InsertionSort_deque(it, len);
}

void    PmergeMe::Merge_sort_vector(std::vector<double>::iterator it, size_t len)
{
    if (len > 10)   
	{
		size_t n = len/2;
		Merge_sort_vector(it, n);
		Merge_sort_vector(it + n, (len - n));
        //Merging_vector(it, it + n, n, len - n);
	}
	InsertionSort_vector(it, len);
}

void    PmergeMe::InsertionSort_deque(std::deque<double>::iterator it, size_t len)
{
    int j;
    double k;

    for (int i = 1; i < len; i++)
    {
        k = it[i];
        j = i - 1;
        while (j >= 0 && it[j] > k)
        {
            it[j + 1] = it[j];
            j--;
        }
        it[j + 1] = k;
    }
}

void    PmergeMe::InsertionSort_vector(std::vector<double>::iterator it, size_t len)
{
    double k;
    int j;

    for (int i = 1; i < len; i++)
    {
        k = it[i];
        j = i - 1;
        while (j >= 0 && it[j] > k)
        {
            it[j + 1] = it[j];
            j--;
        }
        it[j + 1] = k;
    }
}

// void    PmergeMe::Merging_vector(std::vector<double>::iterator it, std::vector<double>::iterator it2, size_t l1, size_t l2)
// {
//     size_t i;
//     size_t j;
//     int tmp;

//     j = 0;
//     while (j < l2)
//     {
//         i = 0;
//         while (i < l1)
//         {
//             if (it[i] > it2[j])
//             {
//                 tmp = it2[j];
//                 it2[j] = it[i];
//                 it[i] = tmp;
//             }
//             i++;
//         }
//         j++;
//     }
// }

// void    PmergeMe::Merging_deque(std::deque<double>::iterator it, std::deque<double>::iterator it2, size_t l1, size_t l2)
// {
//     size_t i;
//     size_t j;
//     int tmp;

//     j = 0;
//     while (j < l2)
//     {
//         i = 0;
//         while (i < l1)
//         {
//             if (it[i] > it2[j])
//             {
//                 tmp = it2[j];
//                 it2[j] = it[i];
//                 it[i] = tmp;
//             } else 
//                 i++;
//         }
//         j++;
//     }
// }

