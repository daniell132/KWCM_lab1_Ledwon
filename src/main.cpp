#define _USE_MATH_DEFINES
#include <iostream>
#include "LaborkaConfig.h"
#ifdef USE_TRIGONOMETRY_DEGREE
	#include "trygonometria.h"
#else
	#include <cmath>
#endif
#include <string>

int  main(int argc, char* argv[])
{ 
	double angle_deg  = 0;
	if (argc > 1)
	{
		angle_deg = std::stod(argv[1]);
	}

	double angle_rad = (angle_deg * M_PI) /180;

	#ifdef USE_TRIGONOMETRY_DEGREE
		std::cout << degreemath::sin(angle_deg) << std::endl;
	/*	std::cout << degreemath::cos(angle_deg) << std::endl;
		std::cout << degreemath::tg(angle_deg) << std::endl;
		std::cout << degreemath::ctg(angle_deg) << std::endl;*/
	#else
		std::cout << sin(angle_rad) << std::endl;
		//std::cout << cos(angle_rad) << std::endl;
		//std::cout << tan(angle_rad) << std::endl;
		//std::cout << 1/tan(angle_rad) << std::endl;
	#endif

	return 0; 
}
