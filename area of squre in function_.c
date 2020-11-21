#include <stdio.h>

/*function declaration*/
float area(float);

int main() {
	float side;
	
	scanf ("%f",&side);
	
	area(side);
    
	return 0;
}
    //function define
    float area ( float side)
{ 
        float area;
        
        area=side*side;
        
        printf("%f",area);
}    
