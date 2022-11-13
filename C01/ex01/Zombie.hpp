#pragma once

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string name1);
        ~Zombie();
        void    announce(void);
        void    set_name(std::string str);
};

Zombie	*ZombieHorde(int N, std::string name2);