/*** vector.cpp start ***/

#include <cmath>
#include "vector.h"

// constructor
vector::vector(x1,x2,x3){
	double x = x1;
	double y = x2;
	double z = x3;
}

// r being the length of the vector
double vector::r(){
	return sqrt(x*x + y*y + z*z);
}

/*** vector.cpp end ***/
