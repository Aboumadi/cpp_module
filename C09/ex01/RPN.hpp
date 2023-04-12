#pragma once
#include <iostream>
#include <stack>
#include <stdlib.h>

class RPN
{
private:
    std::stack<double> rpn;
public:
    RPN();
    void    operations(std::string str);
    RPN(const RPN &copy);
    RPN const &operator=(const RPN &copy);
    ~RPN();
};
