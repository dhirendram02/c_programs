#include <stdio.h>

int main() {
	int a,b,t,hcf,lcm;
	scanf ("%d%d",&a,&b);
	
	while(b!=0)
	{
	    t=b;
	    b=a%b;
	    a=t;
	    
	}
	hcf=a;
	lcm=(a*b)/hcf;
	printf("HCF is %d and LCM is %d\n",hcf,lcm);
	return 0;
}

