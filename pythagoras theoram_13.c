
#include <stdio.h>

int main(void) {
	// variable declaration 
	float hypo;
	float per;
	float bas;
	
	//initialization 
	scanf ("%f",&bas);
	scanf ("%f",&per);
	
	//operation defination
	hypo = (pow(per,2))+ (pow(bas,2));
	
	printf ("hypotainus=%f",hypo );

	return 0;
}
