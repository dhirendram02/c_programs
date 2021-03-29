#include <stdio.h>

int main() {
	int *ab,m;
	m=29;
	printf("address of m = %d\n",&m);
	printf(" value of m = %d\n",m);
	ab=&m;
	printf("address of ab=%d\n",ab);
	printf("value of ab=%d\n",*ab);
	
	m=34;
	printf("address of m = %d\n",&ab);
	printf(" value of m = %d\n",*ab);
	
	*ab=7;
		printf("address of m = %d\n",&m);
	printf(" value of m = %d\n",m);
	
	return 0;
}

