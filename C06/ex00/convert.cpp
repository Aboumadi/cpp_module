#include "convert.hpp"

convert::convert()
{
}

convert::~convert()
{
}

convert::convert(std::string str): _str(str)
{
    check_type();
    if (str.length() > 19)
    {
        std::cout<<"char : impossible"<<std::endl;
        std::cout<<"int : impossible"<<std::endl;
        std::cout<<"float : impossible"<<std::endl;
        std::cout<<"double : impossible"<<std::endl;
    }
    else if (_str == "nan" || _str == "+inf" || _str == "-inf" || _str == "+inff"|| _str == "-inff" || _str == "nanf")
        convert_nans(_str);
    else if (_type == "char")
        convert_to_char(_str[0]);
    else if(_type == "int")
        convert_to_int(_str);
    else if(_type == "float")
    {
        if (check_syntaxf())
            convert_to_float(_str);
        else
        {
            std::cout<<"impossible to conversion"<<std::endl;
            return;
        }
    }
    else if (_type == "double")
    {
        if (check_syntaxd())
            convert_to_float(_str);
        else
        {
            std::cout<<"impossible to conversion"<<std::endl;
            return;
        }
    }
    else
        std::cout<<"error input"<<std::endl;
}

void    convert::check_type()
{
    if(is_char())
        _type = "char";
    else if(check_int())
        _type = "int";
    else if (check_double())
        _type = "double";
    else if(check_float())
        _type = "float";
}

bool    convert::check_syntaxf()
{
    int n = 0;
    int p = 0;
    for (size_t i = 0; i < _str.length(); i++)
    {
        if (_str[i] == 'f')
            n++;
        if (_str[i] == '.')
            p++;
    }
    if (n == 1 && _str[_str.length() - 1] == 'f' && p == 1 && isdigit(_str[_str.length() - 2]))
        return true;
    else
        return false;
}

bool    convert::check_syntaxd()
{
    int n = 0;
    for (size_t i = 0; i < _str.length(); i++)
    {
        if (_str[i] == '.')
            n++;
    }
    if (n == 1)
        return true;
    else
        return false;
    
}

bool    convert::is_char()
{
        if (_str.length() == 1 && !isdigit(_str[0]) && isprint(_str[0]))
             return true;
        else
            return false;
}

bool    convert::check_int()
{
    if (_str.find_first_not_of("-+0123456789") == std::string::npos)
        return true;
    else
        return false;
}

bool    convert::check_float()
{
    if (_str.find_first_not_of("-+0123456789.f") == std::string::npos)
        return true;
    else
        return false;
}

bool    convert::check_double()
{
    if (_str.find_first_not_of("-+.0123456789") == std::string::npos)
        return true;
    else
        return false;
}

void    convert::convert_to_char(char c)
{
    std::cout<<"char : " << static_cast<char>(c)<<std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f"<< std::endl;
	std::cout << "double: " << static_cast<double>(c)<< ".0" << std::endl;
    
}

void    convert::convert_to_int(std::string str)
{
    double i;
    i = atoll(str.c_str());
    if (i < CHAR_MIN || i > CHAR_MAX || !isprint(i))
        std::cout<<"char : Non displayable" <<std::endl;
    else
    {std::cout<<"char : " << static_cast<char>(i)<<std::endl;}
    if (i < INT_MIN || i > INT_MAX)
        std::cout << "int: conversion is impossible" << std::endl;
    else
    {
        std::cout << "int: " << static_cast<int>(i) << std::endl;
    }
	    std::cout << "float: " << static_cast<float>(i) << ".0f"<< std::endl;
	    std::cout << "double: " << static_cast<double>(i)<< ".0" << std::endl;
}

void    convert::convert_to_float(std::string str)
{
    double i;
        i = atof(str.c_str());
        std::cout<<"char : Non displayable" <<std::endl;
        std::cout << "int: " << static_cast<int>(i) << std::endl;
        if (static_cast<float>(i) == static_cast<int>(i))
            std::cout << "float: " << static_cast<float>(i) << ".0f"<< std::endl;
        else
            std::cout << "float: " << static_cast<float>(i) << "f"<< std::endl;
        if (static_cast<float>(i) == static_cast<int>(i))
	        std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
        else
            std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void    convert::convert_nans(std::string str)
{
    std::cout<<"char : impossible"<<std::endl;
    std::cout<<"int : impossible"<<std::endl;
    if (str == "nan" || str == "nanf")
    {
        std::cout<<"float : nanf"<<std::endl;
        std::cout<<"double : nan"<<std::endl;
    }
    else if (str == "-inf" || str == "-inff")
    {
        std::cout<<"float : -inff"<<std::endl;
        std::cout<<"double : -inf"<<std::endl;
    }
    else if (str == "+inf" || str == "+inff")
    {
        std::cout<<"float : inff"<<std::endl;
        std::cout<<"double : inf"<<std::endl;
    }
}