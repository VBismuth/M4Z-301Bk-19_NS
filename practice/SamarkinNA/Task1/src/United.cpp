#include <iostream>
#include "United.hpp"

United::United()
{
	m_int = 0;
	m_char = static_cast<char>(0);
	m_double = 0.;
}

United::United(int myInt, char myChar, double myDouble)
{
	m_int = myInt;
	m_char = myChar;
	m_double = myDouble;
}

void United::printAll()
{
	std::cout << "(" << m_int << ", " << m_char << ", " << m_double << ")\n";
}
