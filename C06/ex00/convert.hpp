#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <sstream>
#include <iomanip>
#include <cstdlib>
#include <climits>

class convert
{
private:
    std::string _str;
    std::string _type;
public:
    convert();
    ~convert();
    convert(std::string str);
    void    check_type();
    bool    check_syntaxf();
    bool    check_syntaxd();
    bool    is_char();
    bool    check_int();
    bool    check_double();
    bool    check_float();
    void    convert_to_char(char c);
    void    convert_to_int(std::string str);
    void    convert_to_float(std::string str);
    void    convert_nans(std::string str);
};
