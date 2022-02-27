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

void United::setVar(int newInt, char newChar, double newDouble)
{
	m_int = newInt;
	m_char = newChar;
	m_double = newDouble;
}

//Сумма всех значений, для удобства сравнения
long double United::someSum() const
{
	return static_cast<double>(m_int) + static_cast<char>(m_char) + m_double;
}

void United::operator=(const United &Other)
{
	m_int = Other.m_int; 
	m_char = Other.m_char; 
	m_double = Other.m_double;
}

const bool United::operator==(const United &Other) const 
{
	return someSum() == Other.someSum();
}

const bool United::operator<(const United &Other) const
{
	return someSum() < Other.someSum();
}

const bool United::operator>(const United &Other) const
{
	return someSum() > Other.someSum();
}
