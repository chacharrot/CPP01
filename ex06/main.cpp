#include "Karen.hpp"

int main()
{
	Karen karen;
	std::string data;

	std::cout << "Hi, I'm Karen." << std::endl;
	while (42)
	{
		std::cout << "Input : ";
		std::getline(std::cin, data);
		karen.complain(data);
	}
}