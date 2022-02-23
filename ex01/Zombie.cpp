#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "HordeZombie have been created" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << this->_name << " is infected" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->_name << " is dead" << std::endl;
}

void Zombie::set_name(std::string name)
{
	this->_name = name;
}

void Zombie::announce(void)
{
	std::cout << "<" << _name << "> " << "BraiiiiiiinnnzzzZ..." << std::endl;
}