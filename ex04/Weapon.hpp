#pragma once
#include <iostream>

class Weapon
{
private:
    std::string type;
public:
    Weapon(std::string t_type);
    ~Weapon();
    const std::string   &getType();
    void                setType(std::string s_type);
};
