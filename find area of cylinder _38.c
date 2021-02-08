#include <stdio.h>

int main() {
	float rad,hei,sur,vol,t,l,pi;
	pi=3.14;
	scanf("%f%f",&rad,&hei);
	sur=2*pi*rad*(rad+hei);
	vol=pi*rad*rad*hei;
	l=2*pi*rad*hei;
	t=pi*rad*rad;
	printf("area of cylinder=%f\n",sur);
    printf("volume of cylinder=%f\n",vol);
    printf("lateral surface=%f\n",l);
    printf("top or bottom=%f\n",t);
    
	return 0;
}

