#include <iostream>
#include <clocale>
#include <string>
// Подключение заголовочного файла
#include "FilesWork.h"

using std::string;
using std::cout;
using std::endl;

int main()
{
	setlocale(LC_ALL, "RU");

	// Создание объекта
	FilesWork file("some.txt");
	// Запись данных в файл
	file.write_file("new text");
	// Считывание данных из файла
	file.read_file();

	// Добавление дополнительной информации в файл
	file += "!!!";
	// Заново считываем данные
	file.read_file();

	return 0;
}