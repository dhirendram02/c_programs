#include <stdio.h>
int main()
{
    int avg = 0, sum = 0, x;

    int num[4];

    for (x=0; x<4; x++)
    {
        printf(" %d \n", (x+1));
        scanf("%d", &num[x]);
    }
    for (x=0; x<4 ; x++)
    {
        sum = sum+num[x];
    }

    avg = sum/4;
    printf(" %d", avg);
    return 0;
}
