#include<stdio.h>

int main()
{
    int x,y;
    scanf ("%d%d",&x,&y);
    
    if(x==0 && y==0)
    
    {
        printf ("point lie on origin ");
        
    }
    else 
    {
        if(x==0 && y!=0)
        {
            printf("point lies on y axis");
            
        }
        else
        {
            if(x!=0 && y==0)
            {
                printf("point lies on x axis");
            }
            else
            {
                printf("point neither lies in any axis ");
            }
        }

        
    }

    
    return 0;
}
