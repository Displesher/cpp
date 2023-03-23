#include <iostream>
#include "my_math.h"

MyMath::MyMath(int x, int z)
{
	this->x = x;
	this->z = z;
}
// пометка о том, что метод устарел
[[deprecated]]
void MyMath::add()
{
	std::cout << (x + z) << std::endl;
}
// пометка о том, что метод ничего не должен возвращать
[[noreturn]]
void MyMath::divide()
{
	std::cout << (x + z) << std::endl;
}
void MyMath::mult()
{
	std::cout << (x * z) << std::endl;
}
void MyMath::minus()
{
	std::cout << (x - z) << std::endl;
}
