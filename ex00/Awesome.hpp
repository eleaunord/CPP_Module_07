
#ifndef AWESOME_HPP
#define AWESOME_HPP

#include "whatever.hpp"

class Awesome
{
public:
	Awesome(void) : _n(0) {}
	Awesome(int n) : _n(n) {}
	Awesome &operator=(Awesome &a)
	{
		_n = a._n;
		return *this;
	}
	bool operator==(Awesome const &rhs) const { return (this->_n == rhs._n); }
	bool operator!=(Awesome const &rhs) const { return (this->_n != rhs._n); }
	bool operator>(Awesome const &rhs) const { return (this->_n > rhs._n); }
	bool operator<(Awesome const &rhs) const { return (this->_n < rhs._n); }
	bool operator>=(Awesome const &rhs) const { return (this->_n >= rhs._n); }
	bool operator<=(Awesome const &rhs) const { return (this->_n <= rhs._n); }
	int get_n() const { return _n; }

private:
	int _n;
};


#endif