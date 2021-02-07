#include<stdio.h>

int main()
{
    int n,rev,temp,rem;
    scanf("%d",&n);
    temp=n;
    while (n>0)
    {
        rem =n%10;
        rev=rev+(rem*rem*rem);
        n=n/10;
    }
    if (rev == temp )
    {
        printf("armstrong");
    }
    else 
    {
        printf("not armstrong");
        
    }
    
    
    return 0;
}
