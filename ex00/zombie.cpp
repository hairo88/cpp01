#include "zombie.hpp"

Zombie::~Zombie() {
	std::cout << this->_name << " is dead." << std::endl;
}

void Zombie::announce() {
	std::cout << this->_name << ": BiaiiiiinzzzZ...." << std::endl;
}

Zombie::Zombie(std::string name) : _name(name) {
	this->_name = name;
}
