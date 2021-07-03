#include <stdio.h>

int main() {
    	int r,c,m,v,sum=0;
     m=v=3;
	  int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	for (r=0;r<m;r++)
    	{
	      for(c=0;c<v;c++)
	      {
	          if(r<c)
	          {
	              sum=sum + arr[r][c];
	          }
	      }
    	}
    	printf("%d",sum);
	return 0;
}

