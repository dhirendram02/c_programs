#include <stdio.h>

int main() {
	int arr[40],i,j=0,n,sml,sml2nd;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    printf ("element :%d\n",i);
	    scanf("%d",&arr[i]);
	    
	}
	sml=arr[0];
	for(i=0;i<n;i++)
	{
	    if(sml>arr[i])
	    {
	        sml=arr[i];
	        j = i;
	    }
	}
	sml2nd=99999;
	for(i=0;i<n;i++)
	{
	    if(i==j)
	    {
	        i++;
	        i--;
	        
	    }
	    else{
	        if(sml2nd>arr[i])
	        {
	            sml2nd=arr[i];
	        }
	    }
	}
	printf("second largest number is :%d \n", sml2nd);
	return 0;
}

