#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP

#include <iostream>

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



#endif //TEMPLATES_HPP
