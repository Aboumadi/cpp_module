#pragma once
#include<iostream>
#include<string.h>
#include<string>
#include<cstring>

class Harl
{
private:
    void	debug();
	void	info();
	void	warning();
	void	error();
public:
    Harl();
    ~Harl();
    void    other();
    void complain( std::string level );
};
