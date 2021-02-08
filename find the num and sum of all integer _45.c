#include<stdio.h>

int main()
{
    int i,sum=0;
    for (i=101; i<200; i++)
    {
        if (i%9 == 0)
        {
            printf(" %d",i);
            sum =sum+i;
            
        }
    }
    printf("\nsum of all integer =%d\n",sum);
    
    return 0;
}
