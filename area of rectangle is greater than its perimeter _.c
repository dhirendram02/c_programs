#include<stdio.h>

int main()
{
    int l,b,area, peri;
    scanf ("%d%d", &l,&b);
    area=l*b;
    peri=2*(l+b);
    if(area>peri)
    {
        printf ("area is greater than perimeter");
        
    }
    else 
    {
        printf("area is lesser than perimeter");
        
    }

    
    return 0;
}
