#include <stdio.h>

int main(void) {
	//variable declaration
	  float x;
	  float y;
	  float per;
	  
	  // implementation
	  scanf("%f",&x);
	  scanf("%f",&y);
	  
	  //operation 
	
	  per=(x*y)/100;
	  
	  printf(" %f percent of %f is : %f", y, x, per);
	  return 0;
}

