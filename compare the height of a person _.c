#include <stdio.h>
int main()
{
    float Perheight;
 
    scanf("%f", &Perheight);
    if (Perheight < 150.0)
        printf("The person is Dwarf. \n");
    else if ((Perheight >= 150.0) && (Perheight < 165.0))
        printf("The person is  average heighted. \n");
    else if ((Perheight >= 165.0) && (Perheight <= 195.0))
        printf("The person is taller. \n");
    else
        printf("Abnormal height.\n");
        
        return 0;
}
