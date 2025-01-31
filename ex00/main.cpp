#include "whatever.hpp"
#include <iostream>
#include "Awesome.hpp"

// main from the subject
int main(void)
{
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
	std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
	std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
	return 0;
}


// std::ostream &operator<<(std::ostream &o, const Awesome &a)
// {
// 	o << a.get_n();
//  	return o;
// }

// int main(void)
// {
// 	Awesome a(2), b(4);

// 	swap(a, b);
// 	std::cout << a << " " << b << std::endl;
// 	std::cout << max(a, b) << std::endl;
// 	std::cout << min(a, b) << std::endl;

// 	return (0);
// }

// void testOperators()
// {
//     std::cout << "=== Testing comparison operators ===" << std::endl;
//     Awesome a(10), b(20), c(10);

//     std::cout << "a == b: " << (a == b) << " (expected: 0)" << std::endl;
//     std::cout << "a == c: " << (a == c) << " (expected: 1)" << std::endl;
//     std::cout << "a != b: " << (a != b) << " (expected: 1)" << std::endl;
//     std::cout << "a < b: "  << (a < b)  << " (expected: 1)" << std::endl;
//     std::cout << "b > a: "  << (b > a)  << " (expected: 1)" << std::endl;
//     std::cout << "a <= c: " << (a <= c) << " (expected: 1)" << std::endl;
//     std::cout << "b >= a: " << (b >= a) << " (expected: 1)" << std::endl;
// }

// void testAssignment()
// {
//     std::cout << "\n=== Testing assignment operator ===" << std::endl;
//     Awesome a(5);
//     Awesome b(10);
//     std::cout << "Before assignment: a = " << a << ", b = " << b << std::endl;
//     a = b;
//     std::cout << "After assignment: a = " << a << ", b = " << b << std::endl;
// }

// void testSwap()
// {
//     std::cout << "\n=== Testing swap function ===" << std::endl;
//     Awesome a(1), b(2);
//     std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
//     swap(a, b);
//     std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
// }

// void testMinMax()
// {
//     std::cout << "\n=== Testing min and max functions ===" << std::endl;
//     Awesome a(42), b(24);
//     std::cout << "min(a, b): " << min(a, b) << " (expected: 24)" << std::endl;
//     std::cout << "max(a, b): " << max(a, b) << " (expected: 42)" << std::endl;
// }

// int main()
// {
//     testOperators();
//     testAssignment();
//     testSwap();
//     testMinMax();
//     return 0;
// }
