/*** vector.h start ***/
#ifndef VECTOR_H
#define VECTOR_H

// class representing a vector in 3 dimensional space
class vector{
	private:
		double x, y, z;
	public:
		// default constructor which creates vector with zeros
		vector();
		// basic constructor, receives x y z for cartesian
		vector(double x, double y, double z);
		
		// methods for getting the values in cartesian
		double x();
		double y();
		double z();

		// methods for cilyndrical coordinates
		double rho();
		double phi();

		// spherical coordinates
		double r();
		double theta();
};

// functions for vector based calculations
double times(vector x1, vector x2);
vector cross(vector x1, vector x2);

#endif

/*** vector.h end ***/
