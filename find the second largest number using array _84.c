#include <stdio.h>

int main() {
	int arr[50];
	int n,i,j=0,lar,lar2;
	scanf("%d",&n);
	lar=0;
	lar2=0;
	printf("%d",n);
	for(i=0;i<n;i++)
	{
	    printf("%d",i);
	    scanf("%d",&arr[i]);
	    
	}
	for(i=0;i<n;i++)
	{
	    if(lar<arr[i])
	    {
	        lar=arr[i];
	        j=i;
	        
	    }
	    
	}
	for(i=0;i<n;i++)
	{
	    if(i==j)
	    {
	        i++;
	        i--;
	    }
	    else
	    {
	        if(lar2<arr[i])
	        {
	            lar2=arr[i];
	        }
	    }
	}
	printf("  second largest number is %d\n\n",lar2);

	return 0;
}

