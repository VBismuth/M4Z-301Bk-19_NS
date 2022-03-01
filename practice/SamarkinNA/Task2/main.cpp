#include <iostream>

template <typename Arr>
void printArr(const Arr *myArr, int size)
{
	if(myArr && size > 0)
	{
		std::cout << "{";
		int idx = 0;
		do
		{
			std::cout << myArr[idx++];
		} while(idx < size && std::cout << ", ");
		
		std::cout << "}" << std::endl;
	}
	else
	{
		std::cout << "Error in printArr(): nullptr" << std::endl;
		exit(-1);
	}
}

template <typename ArrType>
void interFunc(const ArrType *original, ArrType *target, int origSize, int targSize)
{
	if (origSize <= targSize)
	{
		std::cout << "Error in interFunc(): invalide sizes" << std::endl;
		exit(-2);
	}
	if (original && target && origSize && targSize)
	{
		if (targSize == 1)
			target[0] = (original[0] + original[origSize]) / 2;
		else 
		{
			bool is_targOdd = (targSize % 2);
			bool is_origEven = (origSize % 2 == 0);

			if (is_targOdd)
			{
				int oMiddle = origSize / 2;
				target[targSize / 2] = (is_origEven) ? 
					((original[oMiddle] + original[oMiddle - 1]) / 2) : 
					((original[oMiddle] + original[oMiddle - 1] + original[oMiddle + 1]) / 3);
			}

			bool diff = (origSize % targSize > 0);
			for (int i = 0; i < targSize / 2; i++)
			{ 
				target[i] = (i) ? ((original[i] + original[i + diff]) / 2) : original[i];
				target[targSize - 1 - i] = (i) ? 
					((original[origSize - 1 - i] + original[origSize - 1 - i - diff]) / 2) :
					original[origSize - 1 - i];
			}
		}
	}
	else
	{
		std::cout << "Error in interFunc(): nullptr" << std::endl;
		exit(-1);
	}
}

int main()
{
	const int sizeA = 6;
	const int sizeB = 4;

	int arrA[sizeA] = {0, 2, 3, 4, 5, 6};
	int arrB[sizeB] = {};

	std::cout << "Array A["<< sizeA << "]: ";
	printArr(arrA, sizeA);

	interFunc(arrA, arrB, sizeA, sizeB);
	std::cout << "Written array A["<< sizeA << "] to smaller array B[" << sizeB <<"]: ";
	printArr(arrB, sizeB);

	return 0;
}
