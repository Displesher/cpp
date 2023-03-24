#pragma once

using std::string;

class FilesWork
{
private:
	string name;
public:
	FilesWork(string name);

	void write_file(string new_text);
	void read_file();
	void operator += (string new_text);
};
