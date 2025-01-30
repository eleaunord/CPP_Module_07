
#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

// adress of an array (pointer to the first element of the array), length of an array, function that will be called on every element of the array
template <typename T>
void iter(T *array, size_t length, void (*f)(T const &)) // can work with any type T, const so that both modifying and non modifying functions work
{
	for (size_t i = 0; i < length; i++)
	{
		f(array[i]); // modifies elements in the array
	}
		
}

// print one element of the array and put a space after it ; will be used as the 3rd param of iter
template <typename T>
void print(T const &element)
{
	std::cout << element << " ";
}
#endif