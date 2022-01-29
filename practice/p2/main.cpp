#include <iostream>
#include "myfunc.h"

int main()
{
	std::cout << std::max<int>(2,5) << std::endl;
	std::cout << std::max<double>(2.2, 5.2) << std::endl;
	int x, y;
	x = 6;
	y = 9;
	std::cout << minE(x, y) << std::endl;
	return 0;
}
