#include <iostream>
#include <string>
#include <vector>
#include "myfunc.h"
#include "United.h"

int main()
{
    std::cout << std::min<int>(2, 5) << std::endl;
    std::cout << std::min<char>('a', 'c') << std::endl;
    std::cout << std::min<double>(2.2, 5.2) << std::endl;

    int x = 6, y = 9;
    double r = 3.2, t = 2.7;
    United V(10, 5.5, 'V');
    United W(20, 8.5, 'U');
    std::cout << minE<int>(x, y) << std::endl;
    std::cout << minE<double>(r, t) << std::endl;
    //std::cout << minE<char>('a', 'c') << std::endl;
    if (minE<United>(V, W) <<  == V)
    {
        std::cout << "V" << std::endl;
    }
    else
    {
		std::cout << "U" << std::endl;
	}
    return 0;

}
