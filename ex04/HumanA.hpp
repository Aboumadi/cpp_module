#pragma once
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon      &R_Weapon2;
public:
    HumanA(std::string str, Weapon &s_weapon);
    ~HumanA();
    void    attack();
};
