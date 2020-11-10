// simple intrest 

#include <stdio.h>

int main(void) {
	
	// variable declaration
	float pri;
	float ti;
	float in;
	float si;
	
	// initialization
	/*pri = 1200
	ti=2;
	in=3.5;*/
	scanf ("%f" ,&pri);
	scanf ("%f" ,&ti);
	scanf ("%f" ,&in);
	
	// operation definition
	si=(pri*ti*in)/100;
	
	printf("simple intrest=%f",si);

	return 0;
}
