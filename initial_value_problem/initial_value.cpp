/*** starting_value.cpp start ***/

#include <fstream>
#include <string>
#include <cmath>

int main(int argc, char* argv[]){
	// starting values, default is (x,y) = (0,1)
	double x0 = 2;
	double y0 = 1;

	// parameters for numerical computation
	// steps is the amount of iterations
	// h is the step width for each iteration
	unsigned int steps = 1000;
	double h = 0.001;

	// running parameters for x and y
	double x = x0;
	double y = y0;
	double yp = 0;

	// filename for output file
	std::string filename = "starting_value.csv";

	// opening output file
	std::ofstream output;
	output.open(filename);

	// printing information about the csv in first line
	output << "x,y,yp\n";

	// iterating with eulers method
	for(unsigned int i = 0; i < steps; i++){
		x = x0 + i * h;
		
		// here yp gets defined
		yp = exp(-1 * x) / sin(x) - y * cos(x) / sin(x);
		//
		y = y + yp * h;

		// storing the data in the file
		output << x << "," << y << "," << yp << "\n";
	}

	output.close();

	return 0;
}

/*** starting_value.cpp end ***/
