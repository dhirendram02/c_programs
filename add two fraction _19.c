#include <stdio.h>

int main() {
	int a1,a2,b1,b2,d,m,i,gcd;
	scanf("%d%d%d%d",&a1,&a2,&b1,&b2);
	d=(a1*b2)+(a2*b1);
	m=(a2*b2);
	
	for (i=1; i<d &&i<=m;++i)
	{
	    if(d%i==0 && m%i==0)
	    gcd=i;
	}
	printf("the added fraction is %d%d",d/gcd,m/gcd);
	return 0;
}

