
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

int main(int ac, char **av)
{
	if (ac == 4)	
	{
		std::ifstream infile(av[1]);
  		if (!infile.is_open())
		{
			std::cout << "Invalid file" << std::endl;
			return (1);
		}
		std::string infileName = av[1];
		std::string newFileName = infileName + ".replace";
		std::ofstream newFile(newFileName);
		if (!newFile.is_open())
		{
			std::cout << "New file has an error" << std::endl;
			return (1);
		}
		std::string line;
		while (std::getline(infile, line)){
			int pos = line.find(av[2]);
			if (pos >= 0){
				std::string firstString = line.substr(0, pos);
				std::string endString = line.substr(pos + strlen(av[2]), line.length());
				std::string newLine = firstString + av[3] + endString;
				newFile << newLine << std::endl;
			}
			else
				newFile << line << std::endl;
		}			
	}
	else
	{
		std::cout << "Invalid parameters. We need 3 inputs: file, string1 and string2" << std::endl;
		return (1);
	}
	return (0);
}
