#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP

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
		std::cout << "Error in printArr(): got nullptr" << std::endl;
		exit(-1);
	}
}

template <typename ArrType>
void interFunc(const ArrType *original, ArrType *target, int origSize, int targSize)
{
	if (original && target && origSize && targSize)
	{
		if (origSize == targSize)
		{
			std::cout << "Error in interFunc(): got equal sizes" << std::endl;
			exit(1);
		}
		if (origSize > targSize)
		{
			if (targSize == 1)
				target[0] = original[0];
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
		} //if (origSize > targetSize)
		else
		{
			int iters = (targSize - 2) / (origSize - 2);
			if (iters <= 1)
			{
				int tMiddle = targSize / 2;
				for (int i = 0; i < tMiddle; i++)
				{
					target[i] = original[i];
					target[targSize - 1 - i] = original[origSize - 1 - i];
				}
				target[tMiddle] = (target[tMiddle - 1] + target[tMiddle + 1]) / 2;
			} //if (iters == 1)
			else
			{
				target[0] = original[0];
				target[targSize - 1] = original[origSize - 1];

				// Заполняем массив в середине дубликатами
				for (int i = 1; i < origSize - 1; i++)
				{
					for (int j = 0; j < iters; j++)
						target[(i - 1) * iters + j + 1] = original[i];
				}
				for (int k = 1; k < targSize - 2; k++)
				{
					if (target[k] < target[k - 1])
						target[k] = target[k - 1];
				}

				// "Разгладим" повторы
				int iMin (1), iMax (targSize - 2);
				while (iMin < targSize / 2 + 1)
				{
					target[iMin] = (target[iMin - 1] + target[iMin] + target[iMin + 1]) / 3;
					if (iMin >= iMax)
						break;
					if (target[iMax] == 0)
						target[iMax] = target[iMax + 1];
					target[iMax] = (target[iMax - 1] + target[iMax] + target[iMax + 1]) / 3;
					iMin++;
					iMax--;
				}
			}
		}
	}
	else
	{
		std::cout << "Error in interFunc(): got nullptr" << std::endl;
		exit(-1);
	}
}

#endif //TEMPLATES_HPP
