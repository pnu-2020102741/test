#include <iostream>
#include "Notmain.h"

int main()
{
	std::cout << "A";
	std::cout << "B";
	std::cout << "C";
	std::cout << "D";
	std::cout << "E";
	std::cout << "F";
	std::cout << "G";
	std::cout << "H";
	std::cout << "I" << std::endl;
	std::cout << a_plus_b(1, 2) << std::endl;
	for (char b = -128; b < 127; b++)
		std::cout << b;
	std::cout << std::endl;
	system("pause");
	return 0;
}