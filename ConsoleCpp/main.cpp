#include <iostream>
#include <clocale>
#include <string>

using std::string;
using std::cout;
using std::endl;

int main()
{
	setlocale(LC_ALL, "RU");

	int res = 10;
	std::cout << res;

	return 0;
}