#include <stdio.h>

int main() {
	int m=10,n,o;
    int	*z = &m;
	printf("*z store=%d\n",*z);
		printf("&m store=%d\n",&m);
			printf("&n store=%d\n",&n);
				printf("&o store=%d\n",&o);
	return 0;
}

