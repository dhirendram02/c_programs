#include <stdio.h>

int main() {
	int arr[100];
	int n,i,j,k,ctr=0;
	scanf("%d",&n);
	
	printf("%d\n",n);
	for(i=0;i<n;i++)
	{
	    printf("%d\n",i);
	    scanf("%d",&arr[i]);
	    
	}
	
	for(i=0;i<n;i++)
	{
	    printf("element%d\n",i);
	    scanf("%d",&arr[i]);
	}
	 for(i=0; i<n;i++)
	 {
	     ctr=0;
	     for(j=0,k=n;j<k+1;j++)
	     {
	         
	     
	     if(i!=j)
	     {
	         if(arr[i]==arr[j])
	         {
	             ctr++;
	         }
	     }
	 }
	    
	if(ctr==0)
	{
	    printf(" the unique element are %d\n",arr[i]);
	}
}
  printf("\n\n");	
	

	return 0;
}


