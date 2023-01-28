#pragma once
#include <iostream>
#include <string>

template <typename T>
void    iter(T *arr, int len, void f(T&))
{
    for (int i = 0; i < len; i++)
    {
        f(arr[i]);
    }
    
}