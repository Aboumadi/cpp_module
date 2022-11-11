#pragma once

#include <stdio.h>
#include <iostream>
class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string name1);
        ~Zombie();
        void    announce(void);
};

//fonction out of class

Zombie  *newZombie(std::string name);

void	randomChump(std::string name);