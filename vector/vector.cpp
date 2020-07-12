/*** vector.cpp start ***/

#include <cmath>
#include "vector.h"


// default constructor
vector::vector(){
	double x = 0;
	double y = 0;
	double z = 0;
}

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


// functions for vector based calculations
double times(vector x1, vector x2){
	return x1.x * x2.x + x1.y * x2.y + x1.z * x2.z;
}

vector cross(vector x1, vector x2){
	vector result();

	result.x = x1.y * x2.z - x1.z * x2.y;
	result.y = x1.z * x2.x - x1.x * x2.z;
	result.z = x1.x * x1.y - x1.y * x2.x;

	return result;
}


/*** vector.cpp end ***/
