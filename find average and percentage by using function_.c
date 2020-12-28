#include<stdio.h>
int func(int a, int b, int c, float *avg, float *per);
int main()
{
    int a, b, c;
    float avg, per;

    
    scanf("%d", &a);
    
    scanf("%d", &b);
    
    scanf("%d", &c);

    func(a, b, c, &avg, &per);

    printf(" Average: %f", avg);
    printf(" Percentage: %f", per);
    return 0;
}

int func(int a, int b, int c, float *avg, float *per)
{
    *avg = (a+b+c)/3;
    *per = ((a+b+c)/300)*100;
}
