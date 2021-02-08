#include <stdio.h>

/*function declaration*/
float fahre(float);

int main() {
	float cel;
	
	scanf ("%f",&cel);

	fahre(cel);
    
	return 0;
}
    //function define
    float fahre (float cel)
{ 
        float fahre;
        
        fahre=(1.8*cel)+32;
        
        printf("%f",fahre);
}    
