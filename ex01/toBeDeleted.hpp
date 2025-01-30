
#ifndef AWESOME_HPP
#define AWESOME_HPP

#include <iostream>

class Awesome
{
public:
	Awesome(void) : _n(42) { return; }
	int get(void) const { return this->_n; }

private:
	int _n;
};


#endif