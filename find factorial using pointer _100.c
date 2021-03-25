#include <stdio.h>
int fact(int *);
int main() {
    int x;
    scanf("%d",&x);
    fact (&x);
	
	return 0;
}
int fact(int *x)
{
    int i,fact=1;
    for(i=1;i<= *x;i++)
    {
        fact=fact*i;
    }
    printf("Factorial=%d",fact);
}

