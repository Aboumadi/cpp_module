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
    if (_type == "char")
        convert_to_char(_str[0]);
    else if(_type == "int")
        convert_to_int(_str);
    else if(_type == "float")
    {
        if (check_syntaxf())
            convert_to_float(str);
        else
        {
            std::cout<<"impossible to conversion"<<std::endl;
            return;
        }
    }

}

void    convert::check_type()
{
    if(is_char())
        _type = "char";
    else if(check_int())
        _type = "int";
    else if(check_float())
        _type = "float";
    else if (check_double())
        _type = "double";
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
        i++;
    }
    if (n == 1 && _str[_str.length() - 1] == 'f' && p == 1 && isdigit(_str[_str.length() - 2]))
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
    if (_str.find_first_not_of("-+0123456789."))
        return true;
    else
        return false;
}

void    convert::convert_to_char(char c)
{
    std::cout<< _type <<std::endl;
    std::cout<<"char : " << static_cast<char>(c)<<std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << "f"<< std::endl;
	std::cout << "double: " << static_cast<double>(c)<< ".0" << std::endl;
    
}

void    convert::convert_to_int(std::string str)
{
    int i;
    i = atoi(str.c_str());
    if (!isprint(i))
        std::cout<<"char : Non displayable" <<std::endl;
    else
    std::cout<<"char : " << static_cast<char>(i)<<std::endl;
    std::cout << "int: " << static_cast<int>(i) << std::endl;
	std::cout << "float: " << static_cast<float>(i) << "f"<< std::endl;
	std::cout << "double: " << static_cast<double>(i)<< ".0" << std::endl;
}

void    convert::convert_to_float(std::string str)
{
    int i;
    i = atof(str.c_str());
    std::cout<<_type<<std::endl;
    std::cout<<"char : Non displayable" <<std::endl;
    std::cout << "int: " << static_cast<int>(i) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f"<< std::endl;
	std::cout << "double: " << static_cast<double>(i)<< ".0" << std::endl;
}