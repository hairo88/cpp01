#pragma once

#include <iostream>
#include <string>
#include <sstream>

class Zombie {
	private:
		std::string name;
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
		void	setName(std::string name);
};

Zombie *zombieHorde(int n, std::string name);
