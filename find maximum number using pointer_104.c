#include <stdio.h>

int main() {
	int fnu,snu,*ptr1=&fnu,*ptr2=&snu;
	scanf("%d",ptr1);
	scanf("%d",ptr2);
	
	if(*ptr1>*ptr2)
	{
	    printf("%d is maximum",*ptr1);
	    
	}
	else
	{
	 printf("%d is maximum number",*ptr2);   
	}
	return 0;
}

