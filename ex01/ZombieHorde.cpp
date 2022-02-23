#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	std::string temp;
	std::stringstream temp2;
	
	Zombie *ret = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		temp2 << i + 1;
		temp = temp2.str();
		ret[i].set_name(name + temp);
		temp2.str("");
	}
	return ret;
}
