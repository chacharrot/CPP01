#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &type)
{
	this->_type = &type;
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with his ";
	if (_type == NULL)
		std::cout << "fist" << std::endl;
	else
		std::cout << this->_type->getType() << std::endl;
}