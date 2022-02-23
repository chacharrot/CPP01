#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
	std::string readBuff;
	std::size_t findPlace;
	std::string finds;
	std::string replaces;
	std::string replaceFile;
	std::string dotplace;

	if (argc != 4)
	{
		std::cout << "Wrong arguments" << std::endl;
		return 0;
	}
	std::ifstream infile(argv[1]);
	if (!infile.is_open())
	{
		std::cout << "Can't open " << argv[1] << std::endl;
		return (-1);
	}
	else if (infile.peek() == EOF)
	{
		std::cout << "Empty file" << std::endl;
		return (-1);
	}
	finds = argv[2];
	replaces = argv[3];
	if (finds.empty() || replaces.empty())
	{
		std::cout << "Empty string" << std::endl;
		return (-1);
	}
	replaceFile = argv[1];
	replaceFile = replaceFile + ".replace";
	std::ofstream outfile(replaceFile.c_str());
	if (!outfile.is_open())
	{
		std::cout << "Failed to create new file" << std::endl;
		infile.close();
		return (-1);
	}
	while(std::getline(infile, readBuff)) 
	{
		while ((findPlace = readBuff.find(finds)) != std::string::npos) 
		{
			readBuff.erase(findPlace, finds.length());
			readBuff.insert(findPlace, replaces);
		}
		outfile << readBuff;
		if (!infile.eof())
			outfile << std::endl;
	}
	infile.close();
	outfile.close();
}