# pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cctype>
#include <map>

class BitcoinExchange
{
private:
    std::map<std::string, double> btc;
public:
    BitcoinExchange();
    ~BitcoinExchange();
    void    reading_file(char *infile);
    bool    ft_check_date(std::string date);
    bool    ft_check_value(std::string value, double *val);
    bool    ft_is_valid(int year, int mont, int day);
};

