#include "Zombie.hpp"

int main()
{
	Zombie stack = Zombie("stackZ");
	Zombie *heap = newZombie("heapZ");
	stack.announce();
	heap->announce();
	randomChump("random!");
	delete heap;
	return 0;
}