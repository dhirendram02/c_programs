#include <stdio.h>

/*function declaration*/
float ci(float,float,float);

int main() {
	float pri,rat,tim;
	
	scanf ("%f",&pri);
	scanf ("%f",&rat);
	scanf ("%f",&tim);
	ci(pri,rat,tim);
    
	return 0;
}
    //function define
    float ci (float pri, float rat, float tim)
{ 
        float ci;
        
        ci= pri*(pow((1 + rat/100),tim));
        
        printf("%f",ci);
}    
