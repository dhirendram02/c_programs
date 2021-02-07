#include <stdio.h>

int main() {
	float perheight;
	scanf("%f",perheight);
	if(perheight < 150.0)
	{
	    printf("the person is dwarf");
	}
	else if ((perheight>=150.0)&&(perheight<165.0))
	{
	    printf("the person is average height");
	}
	else if ((perheight>=165.0)&&(perheight<=195.0))
	{
	    printf("the person is taller");
	}
	else
	{
	    printf("abnormal height");
	}
	
	return 0;
}

