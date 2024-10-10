#include "zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void)
{
	Zombie *heap = newZombie("Heap");
	randomChump("Stack");
	heap->announce();
	delete heap;
	return 0;
}
