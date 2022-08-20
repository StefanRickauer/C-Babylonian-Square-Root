#include "usual_suspects.h"

bool verbose = false;

double babylonianSquareRoot(double len, double wid) 
{
	double approximation = 0.0, newWidth = 0.0;

	approximation = 0.5 * (len + wid);
		 // len * wid = area
	newWidth = (len * wid) / approximation;
	
	if(verbose)
		printf("length:%f\twidth:%f\tapproximaiton:%f\n", len, wid, approximation);
	
	double diff = (approximation > len) ? approximation - len : len - approximation;
	
	// accuracy limit
	if(diff < 0.000001)
		return approximation;
	
	babylonianSquareRoot(approximation, newWidth);
}

double sqrt(double area)
{
	double length = area;
	double width = 1.0;
	double appSqrt = 0.0;

	appSqrt =  babylonianSquareRoot(length, width);

	return appSqrt;
}

int main(int argc, char *argv[])
{
	if(argc < 2) {
		fprintf(stderr, "Usage: %s <radicant> [--verbose]\n", argv[0]);
		exit(1);
	}
	printf("Implementation of babylonian square root algorithm.\n\n");

	double babsqrt;
	if(argc == 3 && strcmp(argv[2], "--verbose") == 0)
		verbose = true;
	double area = strtod(argv[1], NULL);
	babsqrt = sqrt(area);
	printf("\nCalculated sqrt: %f\n", babsqrt);
	return 0;
}
