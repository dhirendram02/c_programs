#include <stdio.h>

int main() {
	int i,j,row,k;
	scanf ("%d", &row );
	for (i=1; i<=row; i++)
	{
	    for (k=row; k>i; k--)
	     printf(" ");
	    for (j=1; j<=i; j++)
	     {
	         printf("* ");
	     }
	     printf("\n");
	}
	return 0;
}

