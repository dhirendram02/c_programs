#include <stdio.h>
 int sum_number(int);
int main()
{
    int n, sum;
    scanf("%d",&n);
    
    sum = sum_number(n);
    printf("%d",sum);
}

  int sum_number(int n)
 {
     int sum;
    
     
     if(n==1)
     {
         return(1);
     }
     else
     {
         sum=n+sum_number(n-1);
         return(sum);
     }
 }
	

