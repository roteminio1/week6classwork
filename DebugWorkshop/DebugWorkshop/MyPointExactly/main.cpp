#include "Point.h"
#include <iostream>

//  a.the code need to print p1 and p2 
// b. i expected to see the valus of p1 and p2
// c. the debugger didnt stopped because it didnt print the object in main
int main()
{
	Point p1(1, 2);
	Point p2;
	p2 = p1;

	std::cout << p1 << std::endl; // fixed
	std::cout << p2 << std::endl; // fixed

	return 0;
}
