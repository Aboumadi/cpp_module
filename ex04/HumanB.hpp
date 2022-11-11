#pragma once
#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon      *p_weapon;
public:
    HumanB(std::string str);
    ~HumanB();
    void    attack();
    void    setWeapon(Weapon &ref_weapon);
};
