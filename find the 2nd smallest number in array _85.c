#include <stdio.h>

int main() {
	int arr[50];
	int n,i,j=0,sml,sml2;
	scanf("%d",&n);
	sml=0;
	sml2=0;
	printf("%d",n);
	for(i=0;i<n;i++)
	{
	    printf("%d",i);
	    scanf("%d",&arr[i]);
	    
	}
	sml=arr[0];
	for(i=0;i<n;i++)
	{
	    if(sml<arr[i])
	    {
	        sml=arr[i];
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
	        if(sml2<arr[i])
	        {
	            sml2=arr[i];
	        }
	    }
	}
	printf("  second smallest  number is %d\n\n",sml2);

	return 0;
}

