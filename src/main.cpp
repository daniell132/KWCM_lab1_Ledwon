#include <iostream>
#include "trygonometria.h"

int  main() 
{ 
	double angle1 = 30;

	std::cout << degreemath::sin(angle1) << std::endl;
	std::cout << degreemath::cos(angle1) << std::endl;
	std::cout << degreemath::tg(angle1) << std::endl;
	std::cout << degreemath::ctg(angle1) << std::endl;

	return 0; 
}
