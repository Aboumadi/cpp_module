#pragma once
#include <iostream>
#include <string>

template <typename T>
void swap(T &n1, T &n2)
{
    T n3;
    n3 = n1;
    n1 = n2;
    n2 = n3;
}

template <typename T>
T min(T &n1, T &n2)
{
    return (n1 < n2 ? n1 : n2);
}

template <typename T>
T max(T &n1, T &n2)
{
    return (n1 > n2 ? n1 : n2);
}