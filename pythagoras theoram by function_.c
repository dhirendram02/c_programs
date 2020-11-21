#include <stdio.h>

/*function declaration*/
float hypo(float,float);

int main() {
	float per , bas;
	
	scanf ("%f",&per);
	scanf ("%f",&bas);
	hypo(per,bas);
    
	return 0;
}
    //function define
    float hypo ( float per, float bas)
{ 
        float hypo;
        
        hypo=(pow(per,2))+(pow(bas,2))/2;
        
        printf("%f",hypo);
}    
