#include <stdio.h>

/*function declaration*/
float area(float,float);

int main() {
	float len , bret;
	
	scanf ("%f",&len);
	scanf ("%f",&bret);
	area(len,bret);
    
	return 0;
}
    //function define
    float area ( float len, float bret)
{ 
        float area;
        
        area=len*bret;
        
        printf("%f",area);
}    
