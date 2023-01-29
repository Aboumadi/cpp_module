#pragma once
#include <iostream>
#include <string>

template <class T>
class Array
{
private:
    T *arr;
    unsigned int s;
public:
    Array()
    {
        std::cout<<"default constructor"<<std::endl;
        arr = NULL;
    }
    Array(unsigned int n)
    {
        std::cout<<"constructor parametrize"<<std::endl;
        n = s;
        arr = new t[n];
    }
    
    Array(const Array &copy)
    {
        /*unsigned int i = 0;
        std::cout << "copy Constructor\n";
        this->s = copy.s;
        this->arr = new T[s];
        while (i < s)
        {
            this->arr[i] = copy.arr[i];
            i++;
        }*/
        *this = copy;
    }

    Array &operator=(const Array &other)
    {
        unsigned int i = 0;
        std::cout << "copy assignment operator\n";
        if (this != &other)
            delete [] this->arr;
        this->s = other.s;
        this->arr = new T[s];
        while (i < s)
        {
            this->arr[i] = other.arr[i];
            i++;
        }
        return *this;
    }

    T& operator[](int index)
    {
        if (index <=  || index > s)
            throw std::out_of_range("Out of Range error");
        return arr[index];
    }

    unsigned int size() const
        {
            return this->s;
        }
    
    ~Array()
    {
        delete [] arr;
    }
};
