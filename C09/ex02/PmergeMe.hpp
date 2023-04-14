#pragma once

#include<iostream>
#include <sys/_types/_size_t.h>
#include<vector>
#include<deque>
#include<list>
#include<ctime>
#include <iomanip> 
#include<algorithm>

class PmergeMe
{
private:
public:
    std::vector<double> vct;
    std::deque<double> dq;
    PmergeMe();
    PmergeMe(int ac, char **av);
    PmergeMe(const PmergeMe &src);
    PmergeMe  operator=(const PmergeMe &rhs);
    ~PmergeMe();
    void    MergeInsertionSort_vector();
    void    MergeInsertionSort_deque();
    void    Merge_sort_vector(std::vector<double>::iterator it, size_t len);
    void    Merge_sort_deque(std::deque<double>::iterator it, size_t len);
    void    InsertionSort_vector(std::vector<double>::iterator it, size_t len);
    void    InsertionSort_deque(std::deque<double>::iterator it, size_t len);
    void    Merging_vector(std::vector<double>::iterator it, std::vector<double>::iterator it2, size_t l1, size_t l2);
    void    Merging_deque(std::deque<double>::iterator it, std::deque<double>::iterator it2, size_t l1, size_t l2);
};
