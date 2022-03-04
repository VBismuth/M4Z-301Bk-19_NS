#include "templates.hpp"

int main()
{
	const int sizeA = 12;
	const int sizeB = 5;

	int arrA[sizeA] = {0, 2, 3, 4, 5, 6, 7, 9, 10, 12, 14, 17};
	int arrB[sizeB] = {};

	std::cout << "Array A["<< sizeA << "]: ";
	printArr(arrA, sizeA);

	interFunc(arrA, arrB, sizeA, sizeB);
	std::cout << "Written array A["<< sizeA << "] to smaller array B[" << sizeB <<"]: ";
	printArr(arrB, sizeB);

	return 0;
}
