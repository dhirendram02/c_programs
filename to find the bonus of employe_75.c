#include <stdio.h>

int main() {
    
    int i,hour,over,pay;
    
    for (i=1;i<=10;i++)
    {
        scanf ("%d",&hour);
         
          if(hour>40)
          {
               over=hour-40;
        
               pay=over*12;
             
               printf("%d\n",&pay);
          }
          else if (hour<40)
          {
              printf("employes do not work for fractional part of hour\n");
          }
        
    }
	
	return 0;
}

