#include <stdio.h>

/*function declaration*/
float arot(float,int);

int main() {
	float base;
	int hei;
	scanf ("%f",&base);
	scanf ("%d",&hei);
	
	arot(base,hei);
    
	
	return 0;
}
    //function define
    float arot (float base, int hei)
{ 
        float tri;
        
        tri=0.5*base*hei;
        
        printf("%f",tri);
}    
