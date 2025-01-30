#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

// template class that implement a dynamically allocated array with standard behaviors
template <typename T>
class Array
{

private:
	T *_array; // pointer to a dynamically allocated mem for storing elements
	size_t _size; // nb elements array

public:
	// default constructor : alloc single element for default initialization
	Array() : _array(NULL), _size(0) {};

	// param constructor : alloc n elements
	Array(size_t n) : _array(new T[n]()), _size(n) {}; // force initialisation des éléments avec T[n]()

	// copy constructor 
	Array(const Array &rhs) : _array(new T[rhs.size()]), _size(rhs.size())
	{
		for (size_t i = 0; i < _size; i++)
			_array[i] = rhs._array[i]; // deep copy
	}

	// destructor
	~Array() { delete[] _array; }; // FREE

	// assignment operator
	Array &operator=(const Array &rhs)
	{
		if (this != &rhs) // so that it does not delete its own mem and not copy from del mem
		{
			delete[] _array;
			_array = new T[rhs.size()];
			_size = rhs._size;
			for (size_t i = 0; i < _size; i++)
				_array[i] = rhs._array[i];
		}
		return *this;
	}
	// subscript operator
	T &operator[](size_t i) const // index access
	{
		if (i >= _size)
			throw OutOfBoundsException();
		return _array[i];
	}

	size_t size() const { return _size; };

	class OutOfBoundsException : public std::exception
	{
	public:
		virtual const char *what() const throw() { return "index out of bounds"; }
	};

};

// direct printing of the array
template <typename T>
std::ostream &operator<<(std::ostream &out, const Array<T> &arr)
{
	for (size_t i = 0; i < arr.size(); i++)
		out << arr[i] << " ";
	out << "\n";
	return out;
}

#endif