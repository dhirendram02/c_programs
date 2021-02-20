#include <stdio.h>

int  main()
{
   int arr1[50][50], brr1[50][50];
   int i, j, r1, c1, r2, c2, flag =1;
   
       
   scanf("%d %d", &r1, &c1);

   scanf("%d %d", &r2,&c2);
	 
       for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        } 
       
       for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&brr1[i][j]);
            }
        }   
 	 
	 for(i=0;i<r1;i++)
	 {
	   for(j=0;j<c1 ;j++)
	     printf("% 4d",arr1[i][j]);
	    printf("\n");
	 }
	 
	 for(i=0;i<r2;i++)
	 {
	   for(j=0;j<c2 ;j++)
	     printf("% 4d",brr1[i][j]);
	    printf("\n");
	 }
  

   if(r1 == r2 && c1 == c2)
   {
    	
    	for(i=0; i<r1; i++)
    	{
     		for(j=0; j<c2; j++)
     		{
			if(arr1[i][j] != brr1[i][j])
			{
	   			flag = 0;
	   			break;
			}
     		}
   	   }
    }
    else
    {  printf("The Matrices Cannot be compared :\n");
      
    }
    if(flag == 1 )
	printf("Two matrices are equal.\n\n");
    else
	printf("But,two matrices are not equal\n\n");


	return 0;
}

