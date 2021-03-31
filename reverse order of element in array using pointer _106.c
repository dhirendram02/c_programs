#include <stdio.h>

int main() {
	int i,n,arr[10];
	int *pt;
	scanf("%d",&n);
	pt = &arr[0];
	printf("%d : \n",n);
	for(i=0;i<n;i++)
	{
	    printf(" element %d",i+1);
	    scanf("%d",pt);
	    pt++;
	    
	}
	pt = &arr[n-1];
	for(i=n;i>0;i--)
	{
	    printf("\n %d : %d",i,*pt);
	    pt--;
	}
	printf("\n\n");
	return 0;
}

