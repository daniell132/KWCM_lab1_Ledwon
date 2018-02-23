#define _USE_MATH_DEFINES
#include "trygonometria.h"
#include <cmath>

double convertToRad(double degree)
{
	double rad = (degree * M_PI) /180;
	return rad;
}

double degreemath::sin(double degree) {
//zamiana stopni na radiany: pi radianów = 180 stopni
//return std::sin(radian); //funkcja biblioteczna z piku <cmath>
	double rad = convertToRad(degree);
	return std::sin(rad);
}

double degreemath::cos(double degree) {
//zamiana stopni na radiany: pi radianów = 180 stopni
//return std::sin(radian); //funkcja biblioteczna z piku <cmath>
	double rad = convertToRad(degree);
	return std::cos(rad);
}


double degreemath::tg(double degree) {
//zamiana stopni na radiany: pi radianów = 180 stopni
//return std::sin(radian); //funkcja biblioteczna z piku <cmath>
	double rad = convertToRad(degree);
	return std::tan(rad);
}


double degreemath::ctg(double degree) {
//zamiana stopni na radiany: pi radianów = 180 stopni
//return std::sin(radian); //funkcja biblioteczna z piku <cmath>
	double rad = convertToRad(degree);
	return 1/std::tan(rad);
}
