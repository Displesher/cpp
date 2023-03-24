#include <iostream>
#include <string>
#include <fstream>
#include "FilesWork.h"

using std::string;

FilesWork::FilesWork(string name)
{
	this->name = name;
	std::ofstream file(this->name, std::ofstream::app);
	file.close();
}
void FilesWork::write_file(string new_text)
{
	std::ofstream file(this->name, std::ofstream::app);
	file << new_text;
	file.close();
}
void FilesWork::read_file()
{
	std::ifstream file(this->name);
	string file_text;
	while (getline(file, file_text))
	{
		std::cout << file_text << std::endl;
	}
	file.close();
}
void FilesWork::operator += (string new_text)
{
	std::ofstream file(this->name, std::ios_base::app);
	file << new_text;
	file.close();
}