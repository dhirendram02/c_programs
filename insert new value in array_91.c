#include <stdio.h>

int  main()
{
   int arr[100],i,n,p,x;
       
    scanf("%d", &n);
       printf(" %d\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element %d : ",i);
	      scanf("%d",&arr[i]);
	    }
   
   scanf("%d",&x);
   
   for(i=0;i<n;i++)
      printf("% 5d",arr[i]);   
   
   for(i=0;i<n;i++)
     if(x<arr[i])
     {
       p = i;
       break;
     }
   
   for(i=n;i>=p;i--)
      arr[i]= arr[i-1];
   
      arr[p]=x;
   
      
   for(i=0;i<=n;i++)
      printf("% 5d\n",arr[i]);
	  printf("\n");
	  
	  return 0;
}
