#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
	std::cout << this->_name << " is dead" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << this->_name << " is infected" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << "<" << _name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}