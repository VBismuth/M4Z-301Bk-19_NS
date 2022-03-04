#include <vector>
#include "United.hpp"
#include "templates.hpp"

int main()
{
	United First {34212, 'Z', -9.9991};
	United Second {1, 'd', 23.01};
	std::vector<int> ints = {223, -12};
	std::vector<char> chars = {'z', 'G'};
	std::vector<double> doubles = {2.002, 3.019};

	std::cout << "United vars: ";
	First.printAll();
	std::cout << " and ";
	Second.printAll(true);

	std::cout << "Min of them is ";
	(min(First, Second)).printAll(true);

	printMin(ints.at(0), ints.at(1));
	printMin(chars.at(0), chars.at(1));
	printMin(doubles.at(0), doubles.at(1));

	return 0;
}
