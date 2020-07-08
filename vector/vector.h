/*** vector.h start ***/
#ifndef VECTOR_H
#define VECTOR_H

class vector{
	private:
		double x, y, z;
	public:
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



#endif

/*** vector.h end ***/
