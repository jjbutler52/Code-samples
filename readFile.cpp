#include <iostream>
#include <string>
#include <fstream>



void readFile(std::string fileName)
{
	int count = 0;
	std::string fileLine = "";

	std::ifstream inputFile(fileName, std::ios::in);

	if (!inputFile.is_open())
	{
		std::cout << std::endl << "Invalid file Name!" << std::endl;
		//return false;
	}

	while (getline(inputFile, fileLine))
	{
		std::cout << fileLine << std::endl;

	}

	//this->boardRows_ = fileLine.size();
	//this->boardCols_ = fileLine.size();
	std::cout << fileLine.size();

	inputFile.close();
}