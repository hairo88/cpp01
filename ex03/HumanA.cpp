#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : name(name), weapon(weapon) {}

void HumanA::attack() const
{
    std::cout << this->name << " attcks with their " << this->weapon.getType() << std::endl;
}