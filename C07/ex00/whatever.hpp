#pragma once
#include <iostream>
#include <string>

template <class T>
void swap(T &n1, T &n2)
{
    T n3;
    n3 = n1;
    n1 = n2;
    n2 = n3;
}

template <class T>
T min(T &n1, T &n2)
{
    return (n1 < n2 ? n1 : n2);
}

template <class T>
T max(T &n1, T &n2)
{
    return (n1 > n2 ? n1 : n2);
}