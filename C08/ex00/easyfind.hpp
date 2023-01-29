#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>

class NoutFound:public std::exception
{
    const char * what() const throw(){return ("Value not found");}
};

template <typename T>
int easyfind(T const &container, int value)
{
    typename T::const_iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw NoutFound();
    else
    {
        std::cout<<"Occurence was successfully found"<<std::endl;
        return value;
    }
}