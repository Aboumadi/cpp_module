#pragma once
#include <iostream>
#include <string>

template <typename T>
void    it(T *arr, int len, void(*f)(T&))
{
    for (int i = 0; i < len; i++)
    {
        f(arr[i]);
    }
    
}