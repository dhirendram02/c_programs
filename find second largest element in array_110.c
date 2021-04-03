#include <stdio.h>

int main() {
	int arr[50],n,i,j=0,lrg,lrg2nd;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	   
	    scanf("%d",&arr[i]);
	    
	}
	lrg=0;
	for(i=0;i<n;i++)
	{
	    if(lrg<arr[i])
	    {
	        lrg=arr[i];
	        j=i;
	    }
	}
	lrg2nd=0;
	for(i=0;i<n;i++)
	{
	    if(i==j)
	    {
	        i++;
	        i--;
	    }
	    else
	    {
	        if(lrg2nd<arr[i])
	        {
	            lrg2nd=arr[i];
	        }
	    }
	}
	printf("\nsecond largest element in array : %d ", lrg2nd);
	return 0;
}

