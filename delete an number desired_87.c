#include <stdio.h>

int main() {
	int arr[50];
	int i,pos,n;
	    scanf("%d",&n);
	    printf("%d\n",n);
	
	for(i=0;i<n;i++)
	
	{
	  printf("%d",i);
	  scanf("%d",&arr[i]);
    }
	     scanf("%d",&pos);
	     i=0;
	     while(i!=pos-1)
	      i++;   
	     
	     while(i<n)
	     {
	        arr[i]=arr[i+1];
	        i++;
	     }
	 n--;
	 
	for (i=0;i<n;i++)
	{
	    printf("%d\n",arr[i]);
	}

  printf("\n\n");	
	

	return 0;
}


