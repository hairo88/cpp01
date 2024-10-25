#pragma once

#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string type;

    public:
        Weapon(const std::string& type) : type(type) {}

        const std::string& getType() const;
        void setType(const std::string &newType);
};
