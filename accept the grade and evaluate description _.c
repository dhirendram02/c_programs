#include <stdio.h>

int main() {
	char ch;
	scanf ("%c",&ch);
	switch(ch)
	{
	    case 'e' : printf ("excellent");
	               break;
	    case 'v' : printf ("very good");
	               break;
	    case  'g' : printf("good");
	                break;
	    case 'a' : printf("average");
	               break;
	   case 'f' :  printf("fail");
	               break;
	   default : printf ("not valid character");
	             break;
	             
	}
	
	
	return 0;
}

