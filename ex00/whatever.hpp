
#ifndef WHATEVER_HPP
#define WHATEVER_HPP

// swaps the values of 2 given args, does not return anything
template <typename T>
void swap(T &x, T &y)
{
	T tmp = x;
	x = y;
	y = tmp;
}

// compare and returns the smallest value ; returns 2nd one if =
template <typename T>
T min(T &x, T &y)
{
	if (x < y)
		return (x);
	else
		return (y);
}

// compare and returns the greatest one ; returns 2nd one if =
template <typename T>
T max(T &x, T &y)
{
	if (x > y)
		return (x);
	else
		return (y);
}

#endif