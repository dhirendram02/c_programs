#include<stdio.h>
int fibo(int i)
{
    if(i==0)
    {
    return 0;
    }
    if(i==1)
    {
    return 1;
    }
    return  (fibo(i-1)+ fibo(i-2));
    }

 int main()
     {
         int i,n;
         scanf("%d",&n);
         for(i=0;i<n;i++)
         {
            printf("%d",fibo(i)); 
         }
         return 0;
     }
