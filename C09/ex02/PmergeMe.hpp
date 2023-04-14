#pragma once

#include<iostream>
#include<vector>
#include<deque>
#include<list>
#include<ctime>
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
};
