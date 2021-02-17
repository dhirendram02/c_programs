#include <stdio.h>

int main()
{
  int arr1[50][50],arr2[50][50],arr3[50][50],i,j,n;
  
      
       scanf("%d", &n); 
  
    
       
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }   
  
       
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr2[i][j]);
            }
        }    
   
  for(i=0;i<n;i++)
    {
      printf("\n");
      for(j=0;j<n;j++)
           printf("%d\t",arr1[i][j]);
    }
  
  printf("\n");
  for(i=0;i<n;i++)
    {
      printf("\n");
      for(j=0;j<n;j++)
      printf("%d\t",arr2[i][j]);
    }
   printf("\n");
   for(i=0;i<n;i++)
       for(j=0;j<n;j++)
            arr3[i][j]=arr1[i][j]+arr2[i][j];
   printf("\n");
   for(i=0;i<n;i++){
       printf("\n");
       for(j=0;j<n;j++)
            printf("%d\t",arr3[i][j]);
   }
   printf("\n\n");
   return 0;
}
