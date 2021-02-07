#include <stdio.h>

int main() {
	int i,j,spc,row,k,t;
	t=1;
	scanf("%d",&row);
	spc=row+4-1;
	
	for(i=1;i<=row;i++)
	{
	    for(k=spc;k>=1;k--)
	    
	        printf(" ");
	        
	    
	    for(j=1;j<=i;j++)
	    
	     printf("%d",t++);
	     spc--;
	    
	    printf("\n");
	}
	return 0;
}

