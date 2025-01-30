#include <iostream>
#include "iter.hpp"

//#include "test.hpp"

int main()
{
	{
		int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
		std::cout << "int array: ";
		iter(arr, 8, &print);
		std::cout << std::endl;
	}
	{
		float arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
		std::cout << "float array: ";
		iter(arr, 8, &print);
		std::cout << std::endl;
	}
	{
		char arr[] = {'1', '2', '3', '4'};
		std::cout << "char array: ";
		iter(arr, 4, &print);
		std::cout << std::endl;
	}
	{
		std::string arr[] = {"1111", "2222", "3333", "4444"};
		std::cout << "string array: ";
		iter(arr, 4, &print);
		std::cout << std::endl;
	}
}


// std::ostream &operator<<(std::ostream &o, Awesome const &rhs)
// {
// 	o << rhs.get();
// 	return o;
// }

// int main()
// {
// 	int tab[] = {0, 1, 2, 3, 4};
// 	Awesome tab2[5];

// 	iter(tab, 5, print);
// 	iter(tab2, 5, print);

// 	std::cout << std::endl;

// 	return 0;
// }