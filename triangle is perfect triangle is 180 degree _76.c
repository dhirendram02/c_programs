#include <stdio.h>

int main() {
	int angle_a,angle_b,angle_c,sum;
	scanf ("%d%d%d",&angle_a,&angle_b,&angle_c);
	sum = angle_a+angle_b+angle_c;
	if (sum == 180)
	{
	    printf("the triangle is valid ");
	    
	}
	else 
	{
	    printf("the triangle is not valid");
	    
	}
	
	
	return 0;
}

