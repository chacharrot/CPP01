#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
	private:
			std::string _name;
			Weapon *_type;
	public:
			HumanB(std::string name);
			void attack();
			void setWeapon(Weapon &type);
			~HumanB();
};

#endif