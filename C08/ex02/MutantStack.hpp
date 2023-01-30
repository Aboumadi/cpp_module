#pragma once
#include <iostream>
#include <string>
#include <stack>
#include <deque>
#include <list>
#include <vector>
#include <algorithm>

template <class T, class Container = std::deque<T> >
class MutantStack: public std::stack<T>
{
private:
public:
    MutantStack(){};
    ~MutantStack(){};
    MutantStack(MutantStack const &copy) : MutantStack<T, Container>::stack(copy) {};
    MutantStack	&operator=(MutantStack const &other) {
			this->MutantStack::stack::operator=(other);
			return (*this);
		}

    typedef typename Container::iterator iterator;
    typedef typename Container::reverse_iterator reverse_iterator;

    iterator begin(void){
        return this->c.begin();
    }
    iterator end(void){
        return this->c.end();
    }
    reverse_iterator rbegin(void){
        return this->c.rbegin();
    }
    reverse_iterator rend(void){
        return this->c.rend();
    }
};
