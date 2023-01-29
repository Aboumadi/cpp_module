#include "Span.hpp"

Span::Span()
{
    std::cout<<"default construcotr"<<std::endl;
}

Span::Span(unsigned int N)
{
    this->vect.reserve(N);
}


Span::Span(const Span &copy)
{
    *this = copy;
}

Span &Span::operator=(const Span &other)
{
    this->vect = other.vect;
    return *this;
}

void    Span::addNumber(int n)
{
    if (vect.size() < vect.capacity())
        vect.push_back(n);
    else
        throw std::out_of_range("out of range");
}

int     Span::longestSpan()
{
    if (this->vect.size() < 2)
        throw std::runtime_error("number of element is not enough");
    int max = *std::max_element(vect.begin(), vect.end());
    int min = *std::min_element(vect.begin(), vect.end());
    return (max - min);
}

int     Span::shortestSpan()
{
    int m;
    std::vector<int> arr(vect);
    std::sort(arr.begin(), arr.end());
    if (this->vect.size() < 2)
        throw NoElements();
    m = arr[1] - arr[0];
    for (size_t i = 0; i < arr.size() - 1; i++)
    {
        int c = arr[i + 1] - arr[i];
        if (c < m)
            m = c;
    }
    return m;
}

void    Span::fill(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
    while (first < last)
    {
        addNumber(*first);
        first++;
    }
}

int &Span::operator[](unsigned int index)
{
    return this->vect[index];
}

const int &Span::operator[](unsigned int index) const
{
    return this->vect[index];
}
