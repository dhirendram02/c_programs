#include <stdio.h>

int main() {
	int a[100];
	int i,n,sum=0;
	scanf("%d",&n);
	printf("%d\n",n);
	
	for(i=0;i<n;i++)
	{
	    printf("%d\n",i);
	    scanf("%d",&a[i]);
	    
	}
	for(i=0;i<n;i++)
	{
	    sum = sum + a[i];
	}
	printf("sum of all element : %d\n",sum);
	return 0;
}

