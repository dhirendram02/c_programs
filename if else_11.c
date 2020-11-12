#include <stdio.h>

int main(void) {
	// variable declare
	char attendance[10];
	int  time ;
	
	// initialization;
	scanf("%d", &time);
	
	//condition
	if (time < 9)
    	{
    	strcpy(attendance, "on time") ;
    	}
	else 
    	{
    	strcpy(attendance, "late") ;
    	}
    	
	printf("attendance : %s", attendance);
	
	return 0;
}

