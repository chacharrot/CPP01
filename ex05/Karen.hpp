#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>
#include <string>
class Karen
{
	private:
			void debug(void);
			void info(void);
			void warning(void);
			void error(void);
	public:
			Karen();
			std::string stat[4];
			void complain(std::string level);
};

#endif