#include <stdio.h>

int main() {
	int arr[40],i,j=0,n,larg,larg2nd;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    printf ("element :%d\n",i);
	    scanf("%d",&arr[i]);
	    
	}
	larg=0;
	for(i=0;i<n;i++)
	{
	    if(larg<arr[i])
	    {
	        larg=arr[i];
	        j = i;
	    }
	}
	larg2nd=0;
	for(i=0;i<n;i++)
	{
	    if(i==j)
	    {
	        i++;
	        i--;
	        
	    }
	    else{
	        if(larg2nd<arr[i])
	        {
	            larg2nd=arr[i];
	        }
	    }
	}
	printf("second largest number is :%d \n", larg2nd);
	return 0;
}

