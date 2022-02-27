#include <iostream>
#include "United.hpp"

int main()
{
	United First;
	United Second {1, 'd', 23.01};

	First.printAll();
	Second.printAll();
	
	return 0;
}
