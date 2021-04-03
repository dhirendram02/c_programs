#include <stdio.h>

int main() {
	int arr1[10], arr2[10],arr3[10];
	int i,j=0,k=0,n;
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	    printf("\n element- %d",i);
	    scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++)
	{
	    if(arr1[i]%2 == 0)
	    {
	        arr2[j]=arr1[i];
	        j++;
	    }
	    else
	    {
	        arr3[k]=arr1[i];
	        k++;
	    }
	}
	printf("\n even elements are: \n");
	for(i=0;i<j;i++)
	{
	    printf("%d ",arr2[i]);
	}
	printf("\n odd elements are: \n");
	for(i=0;i<k;i++)
	{
	    printf("%d ",arr3[i]);
	}
	printf("\n\n");
	return 0;
}

