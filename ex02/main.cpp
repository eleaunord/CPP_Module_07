#include <iostream>
#include "Array.hpp"  

int main()
{
	{
		Array<int> emptyArray;
		std::cout << "Empty Array size:" << emptyArray.size() << std::endl;
		std::cout << std::endl;
	}
	{
		Array<int> original(3);
		original[0] = 42;
		Array<int> copy = original;
		copy[0] = 99;											  // doit changer uniquement copy
		std::cout << "Original[0]: " << original[0] << std::endl; // doit être 42
		std::cout << "Copy[0]: " << copy[0] << std::endl;		  // doit être 99
		std::cout << std::endl;
	}
	{
		Array<int> intArr(5);
		for (size_t i = 0; i < intArr.size(); i++)
			intArr[i] = (i + 1) * 10;

		std::cout << "int array: " << intArr << std::endl;

		{
			Array<int> copiedArray = intArr;
			std::cout << "copied int array: " << copiedArray << std::endl;

			intArr[0] = 999;
			std::cout << "modifier original int array: " << intArr << std::endl;
			std::cout << "copied int array (unchanged): " << copiedArray << std::endl;
		}

		try
		{
			std::cout << "accessing valid index (intArr[2]): " << intArr[2] << std::endl;
			std::cout << "accessing invalid index (intArr[10]): " << intArr[10] << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << "exception caught: " << e.what() << std::endl;
		}
	}

	{
		Array<float> floatArr(4);
		floatArr[0] = 12.5f;
		floatArr[1] = 25.75f;
		floatArr[2] = 38.125f;
		floatArr[3] = 50.625f;

		std::cout << "\nFloat Array: " << floatArr << std::endl;

		try
		{
			std::cout << "accessing valid index (floatArr[1]): " << floatArr[1] << std::endl;
			std::cout << "accessing invalid index (floatArr[5]): " << floatArr[5] << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << "exception caught: " << e.what() << std::endl;
		}
	}

	return 0;
}

// #include <cstdlib> 
// #define MAX_VAL 750
// int main(int, char**)
// {
// 	// crea tableau dynamique
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
// 	// valeur aleatoire
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }
