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
    std::deque<double> dq;
    std::list<double> lst;
public:
    PmergeMe();
    PmergeMe(int ac, char **av);
    PmergeMe(const PmergeMe &src);
    PmergeMe  operator=(const PmergeMe &rhs);
    ~PmergeMe();
    template <typename T>
    void    Merge_sort(T &container);
};
