#include "templates.hpp"

int main()
{
	const int sizeA = 4;
	const int sizeB = 21;

	int arrA[sizeA] = {1, 2, 4, 10};
	int arrB[sizeB] = {};

	std::cout << "Array A["<< sizeA << "]: ";
	printArr(arrA, sizeA);

	interFunc(arrA, arrB, sizeA, sizeB);
	std::cout << "Written array A["<< sizeA << "] to array B[" << sizeB <<"] with interpolation: ";
	printArr(arrB, sizeB);

	return 0;
}
