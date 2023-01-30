#pragma once
#include <string>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

class Span
{
private:
    std::vector<int> vect;
public:
    Span();
    Span(unsigned int N);
    Span(const Span &copy);
    Span &operator=(const Span &other);
    void addNumber(int n);
    int  longestSpan();
    int  shortestSpan();
    void fill(std::vector<int>::iterator fisrt, std::vector<int>::iterator last);
    int &operator[](unsigned int index);
    const int &operator[](unsigned int index) const;
    class NoElements : public std::exception {
     virtual const char* what() const throw() {
        return "number of element is not enough";
        }
    };
    ~Span();
};
