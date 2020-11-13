 #include <stdio.h>

int main(void) {
	// variable declare
	char result[100];
	int marks ;

	// initialization;
	scanf("%d", &marks);

	//condition
	if (marks < 40){
    	
    	strcpy (result, "fail"); 
    	}
    else if (marks<60 & marks>40){
        
        strcpy (result,"second");
        }
    else 
    	{
    	strcpy (result, "first"); 
    	}

	printf("result : %s", result);

	return 0;
}
    
    

