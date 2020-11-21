#include <stdio.h>

/*function declaration*/
float sum(float);

int main() {
	float n;
	
	scanf ("%f",&n);
	
	sum(n);
    
	return 0;
}
    //function define
    float sum ( float n)
{ 
        float sum;
        
        sum=n*(n+1)/2;
        
        printf("%f",sum);
}    
