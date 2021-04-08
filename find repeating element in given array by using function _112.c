#include <stdio.h>

int findrepetelem (int arr[], int arr_size)
{
    int i, j;
    for(i=0; i< arr_size; i++)
    for(j = i+1; j<arr_size; j++)
    if(arr[i] == arr[j])
    printf("%d", arr[i]);
}
 int main()
 {
     int arr[]={2,7,4,7,8,3,4};
     int num= sizeof(arr)/sizeof(arr[0]),i;
     
     for(i = 0; i<num ; i++)
     {
         printf("%d", arr[i]);
     }
     printf("\n");
      
      findrepetelem(arr,num);
	return 0;
}

