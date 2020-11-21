#include <stdio.h>

/*function declaration*/
float fact(float);

int main() {
	float n;
	
	scanf ("%f",&n);
	
	fact(n);
    
	return 0;
}
    //function define
    float fact ( float n)
{ 
        float fact;
        
        fact=n*(n-1)*(n-2)*(n-3);
        
        printf("%f",fact);
}    
