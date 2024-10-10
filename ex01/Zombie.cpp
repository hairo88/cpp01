#include "Zombie.hpp"

Zombie::Zombie() {
	this->name = "Zombie";
}

Zombie::Zombie(std::string name) : name(name) {
	this->name = name;
}

Zombie::~Zombie() {
	std::cout << this->name << " is dead." << std::endl;
}

void	Zombie::announce(void) {
	std::cout << this->name << ": BiaiiiiinzzzZ...." << std::endl;
}

void	Zombie::setName(std::string name) {
	this->name = name;
}
