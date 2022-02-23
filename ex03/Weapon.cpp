#include "Weapon.hpp"

Weapon::Weapon(std::string Type)
{
	this->_name = Type;
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType()
{
	return this->_name;
}

void Weapon::setType(std::string type)
{
	this->_name = type;
}