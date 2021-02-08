#include <stdio.h>
int natural_num (int);
int main() {
   int n=1;
   
   natural_num (n);
   printf("%d",n);
   return 0;
}
int natural_num (int n)
{
    if (n<=50)
    {
        printf ("%d",n);
        natural_num(n+1);
        
    }
}
