#include "RPN.hpp"

RPN::RPN()
{
}

RPN::~RPN()
{
}

RPN::RPN(const RPN &copy)
{
	*this = copy;
}

RPN const &RPN::operator=(const RPN &copy)
{
    this->rpn = copy.rpn;
    return (*this);
}

void    RPN::operations(std::string str)
{
    double  x;
    double  y;
    double  nbr;

    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
            continue;
        else if (std::isdigit(str[i]))
        {
            nbr = str[i] - 48;
            rpn.push(nbr);
        }
        else if (str[i] == '+' && rpn.size() >= 2)
        {
            y = rpn.top();
            rpn.pop();
            x = rpn.top();
            rpn.pop();
            rpn.push(x + y);
        }
        else if (str[i] == '-' && rpn.size() >= 2)
        {
            y = rpn.top();
            rpn.pop();
            x = rpn.top();
            rpn.pop();
            rpn.push(x - y);
        }
        else if (str[i] == '*' && rpn.size() >= 2)
        {
            y = rpn.top();
            rpn.pop();
            x = rpn.top();
            rpn.pop();
            rpn.push(x * y);
        }
        else if (str[i] == '/' && rpn.size() >= 2)
        {
            if (rpn.top() == 0)
            {
                std::cout<<"Bad input : you devid by zero"<<std::endl;
                return;
            }
            y = rpn.top();
            rpn.pop();
            x = rpn.top();
            rpn.pop();
            rpn.push(x / y);
        }
        else
        {
            std::cout<<"Error"<<std::endl;
            return ;
        }
    }
    if (rpn.size() == 1)
    {
        std::cout<<rpn.top()<<std::endl;
        return ;
    }
    else
    {
        std::cout<<"Bad Input..."<<std::endl;
        return ;
    }
}