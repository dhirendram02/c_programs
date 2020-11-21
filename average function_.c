#include <stdio.h>

/*function declaration*/
float aver(float,float);

int main() {
	float x,y;
	
	scanf ("%f",&x);
	scanf ("%f",&y);

	aver(x,y);
    
	return 0;
}
    //function define
    float aver (float x, float y)
{ 
        float aver;
        
        aver=(x+y)/2;
        
        printf("%f",aver);
}    
