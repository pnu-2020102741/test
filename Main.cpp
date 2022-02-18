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
	for (char bb = -128; bb < 127; bb++)
		std::cout << bb;
	std::cout << std::endl;
	system("pause");
	return 0;
}