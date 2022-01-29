#include <iostream>
#include "United.h"

United::United(int X, double Y, char Z)
{
    fieldInt = X;
    fieldDouble = Y;
    fieldChar = Z;
    std::cout << fieldInt << " " << fieldDouble << " " << fieldChar << std::endl;
}

bool United::operator > (const United &a) // United b
{
	int count = 0;
	if (this->fieldInt > a.fieldInt) {++count;}
	if (this->fieldDouble > a.fieldDouble) {++count;}
	if (this->fieldChar > a.fieldChar) {++count;}
	if (count >= 2) { return true; }
	else { return false; }
}

bool United::operator == (const United &a) // United b
{
	int count = 0;
	if (this->fieldInt == a.fieldInt) {++count;}
	if (this->fieldDouble == a.fieldDouble) {++count;}
	if (this->fieldChar == a.fieldChar) {++count;}
	if (count == 3) { return true; }
	else { return false; }
}

United::~United() {}
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
