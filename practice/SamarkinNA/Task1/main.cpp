#include <iostream>
#include "United.hpp"

template <typename AnyType>

AnyType min(const AnyType &a, const AnyType &b)
{
	return (a > b) ? b : a;
}

template <typename Any>

void printMin(const Any &a, const Any &b)
{
	std::cout << "Min of ("<< a << ", " << b << ") is ";
	std::cout << min(a, b) << std::endl;
}

int main()
{
	United First {34212, 'Z', -9.9991};
	United Second {1, 'd', 23.01};
	int ints[] = {223, -12};
	char chars[] = {'z', 'G'};
	double doubles[] = {2.002, 3.019};

	std::cout << "United vars: ";
	First.printAll();
	std::cout << " and ";
	Second.printAll(true);

	std::cout << "Min of them is ";
	( min(First, Second) ).printAll(true);

	printMin(ints[0], ints[1]);
	printMin(chars[0], chars[1]);
	printMin(doubles[0], doubles[1]);

	return 0;
}
