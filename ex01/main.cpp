#include "Zombie.hpp"

int main()
{
	std::string data;
	int	index;
	
	std::cout << "insert number of Zombies : ";
	std::getline(std::cin, data);
	std::stringstream change(data);
	change >> index;
	Zombie *Horde = zombieHorde(index, "HordeZombie");
	for (int i = 0; i < index; i++)
		Horde[i].announce();
	delete [] Horde;
	return 0;
}