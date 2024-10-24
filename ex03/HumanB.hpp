#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon *weapon;

    public:
        HumanB(const std::string &name) : name(name), weapon(0) {}

        void setWeapon(Weapon &weapon) {this->weapon = &weapon;}

        void attack() const{
            if (weapon) {
                std::cout << name << " attack with their " << weapon->getType() << std::endl;
            }
            else {
                std::cout << name << " doesn't have a weapon." << std::endl;
            }
        }
};

#endif