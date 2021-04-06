#include <stdio.h>

int main() {
	int arr[10] [10] ,i,j,n,det=0;
	for(i=0;i<3;i++)
	{
	    for(j=0;j<3;j++)
	    {
	        printf("\n element [%d],[%d] : ",i,j);
	        scanf("%d",&arr[i][j]);
	    }
	}
	for(i=0;i<3;i++)
	{
	  for(j=0;j<3;j++)
	 	printf("% 4d",arr[i][j]);
	   printf("\n");
	}
	for(i=0;i<3;i++)
	 det=det + (arr[0][i]*(arr[1][(i+1)%3]*arr[2][(i+2)%3] - arr[1][(i+2)%3]*arr[2][(i+1)%3]));
	 printf("%d\n\n",det);
	return 0;
}

