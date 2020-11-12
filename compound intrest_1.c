#include <stdio.h>

int main(void) {
	//variable declare
	float pri;
	float rat;
	float tim;
	float ci;
	
	//initilization
	scanf("%f ",&pri);
	scanf("%f ",&rat);
	scanf("%f ",&tim);
	

	//operation defined
	ci= pri*(pow((1 + rat/100),tim));
	
	printf("compound intrest %f", ci);
	return 0;
}

