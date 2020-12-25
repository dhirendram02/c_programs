#include <stdio.h>

int main() {
    
    int year,d;
    
    scanf("%d",&year);
    d=year%4;
    
    if(d==0)
    {
        printf("leap year");
    }
    else
    {
        printf("not a leap year");
    }
    return 0;
}

