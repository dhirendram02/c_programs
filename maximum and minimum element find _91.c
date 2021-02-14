#include <stdio.h>

int main() {
	int a[100];
	int i,mx,mn,n;
	scanf("%d",&n);
	printf("%d\n",n);
	
	for(i=0;i<n;i++)
	{
	    printf("%d\n",i);
	    scanf("%d",&a[i]);
	    
	}
	mx=a[0];
	mn=a[0];
	
	for(i=1;i<n;i++)
	{
	    if(a[i]>mx)
	    {
	        mx=a[i];
	    }
	    if(a[i]<mn)
	    {
	        mn=a[i];
	    }
	}
	printf("maximum  element : %d\n",mx);
	printf("minimum  element : %d\n",mn);
	return 0;
}

