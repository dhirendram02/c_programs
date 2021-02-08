#include <stdio.h>
int sum_num(int);
int main ()
{
	int n,sum;
	scanf("%d",&n);
	sum= sum_num(n);
	printf("%d%d",n,sum);
	
	return 0;
}

  int sum_num (int n)
  {
      int v;
      
      if(n==1)
      {
          return(1);
      }
      else
      {
          v=n+sum_num(n-1);
          
      }
      return(v);
  }
