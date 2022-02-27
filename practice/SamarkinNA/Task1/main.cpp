#include <iostream>
#include "United.hpp"

int main()
{
	United First;
	United Second {1, 'd', 23.01};

	First.printAll();
	Second.printAll();
	std::cout << (First > Second) << std::endl;
	First = Second;
	First.printAll();
	std::cout << (First == Second) << std::endl;
	First.setVar(-12, 'z', 120.21);
	First.printAll();
	std::cout << (First > Second) << std::endl;

	return 0;
}
