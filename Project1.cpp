

#include <iostream>

int main()
{
	int alt1, alt2;

	std::cout << "Enter the first altitude: ";
	std::cin >> alt1;

	std::cout << "Enter the second altitude: ";
	std::cin >> alt2;

	int change{ alt2 - alt1 };

	std::cout << "The change in altitude is " << change << " m.\n";
	return 0;
}

