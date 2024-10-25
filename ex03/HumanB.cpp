#include "HumanB.hpp"

HumanB::HumanB(const std::string& name)
{
    this->name = name;
    this->weapon = 0;
}

void HumanB::attack() const
{
    if (this->weapon)
    {
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    }
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}