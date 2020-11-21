#include <stdio.h>

/*function declaration*/
float circm(float);

int main() {
	float rad;
	
	scanf ("%f",&rad);
	circm(rad);
    
	return 0;
}
    //function define
    float circm (float rad)
{ 
        float circm;
        
        circm=2*3.14*rad;
        
        printf("%f",circm);
}    
