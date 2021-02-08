#include<stdio.h>

int rec_sum(int n);

int main()
{
    int n;

    scanf("%d", &n);
    
    rec_sum(n);
    
    printf("%d",rec_sum(n);
    
}

int rec_sum(int n)
{
    while(n)
    {
        return (n+ rec_sum(n-1));
    }
}
