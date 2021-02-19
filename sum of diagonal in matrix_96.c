#include <stdio.h>

int main() {
	int arr[50][50],i,j,n,sum=0;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        printf("element [%d],[%d]\n",i,j);
	        scanf("%d",&arr[i][j]);
	        if(i==j)
	        sum=sum+arr[i][j];
	    }
	}
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        printf("%d\t",arr[i][j]);
	        
	    }
	    printf("\n\n");
	}
   printf(" sum of diagonal are = %d\n",sum);
	
	printf("\n\n");
	return 0;
}

