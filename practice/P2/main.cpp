#include <iostream>
#include <string>
#include <vector>
#include "myfunc.h"

int main()
{
	std::cout << std::min<int>(2, 5) << std::endl;
	std::cout << std::min<char>('a', 'c') << std::endl;
	std::cout << std::min<double>(2.2, 5.2) << std::endl;
	
	int x, y;
	x = 6;
	y = 9;
	std::cout << minE(x, y) << std::endl;
	
	return 0;
}
