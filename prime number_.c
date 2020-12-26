#include <stdio.h>

 int main() {
     int n,i,v ;
     scanf("%d",&n);
     
        for (i=2;i<=(n-1);i++)
        {
          v=n%i;
        } 
         if(v==0)
         {
             printf("not prime");
         }
         else
         {
             printf("prime");
         }
    return 0;    
    
    }
	
	


