#include <stdio.h>
int solid_rect(int,int);
int main() {
	int r,c;
	scanf("%d%d",&r,&c);
	solid_rect(r,c);
	return 0;
}
int solid_rect(int r,int c)
{
    int i,j;
    for(i=1;i<=r;i++)
    {
        for(j=1; j<=c; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
