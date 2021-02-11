#include <stdio.h>

int main()
{
    int arr1[100];
    int n, i, j, tmp;


    
    scanf("%d", &n);

       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr1[j] <arr1[i])
            {
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
        }
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("%d  ", arr1[i]);
    }
	        printf("\n\n");
}
