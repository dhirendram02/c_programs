#include <stdio.h>

/*function declaration*/
float perc(float,float);

int main() {
	float x,y;
	
	scanf ("%f",&x);
	scanf ("%f",&y);

	perc(x,y);
    
	return 0;
}
    //function define
    float perc (float x, float y)
{ 
        float perc;
        
        perc=(x*y)/100;
        
        printf("%f",perc);
}    
