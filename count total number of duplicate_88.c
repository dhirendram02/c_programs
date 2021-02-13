#include <stdio.h>

int main() {
	int arr1[100],arr2[100],arr3[100];
	int n,m=1,ctr=0,i,j;
	scanf("%d",&n);
	printf("%d\n",n);
	for(i=0;i<n;i++)
	{
	    printf("element%d\n ",i);
	    scanf("%d",&arr1[i]);
	}
	for(i=0;i<n;i++)
	{
	    arr2[i]=arr1[i];
	    arr3[i]=0;
	    
	}
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        if(arr1[i]==arr2[j])
	        {
	            arr3[j]=m;
	            m++;
	        }
	    }
	    m=1;
	}
	for(i=0;i<n;i++)
	{
	    if(arr3[i]==2)
	    {
	        ctr++;
	    }
	}
	printf("total number duplicate number are%d \n",ctr);
	printf("\n\n");
	return 0;
}

