#include <stdio.h>

/*function declaration*/
float si(float,float,float);

int main() {
	float pri,tim,rat;
	
	scanf ("%f",&pri);
	scanf ("%f",&tim);
	scanf ("%f",&rat);
	si(pri,tim,rat);
    
	return 0;
}
    //function define
    float si (float pri,float tim, float rat)
{ 
        float si;
        
        si=(pri*tim*rat)/100;
        
        printf("%f",si);
}    
