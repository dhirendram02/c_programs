#include <stdio.h>

int main(void) {
    int n, j, sum = 0;

    
    scanf("%d", &n);

    for (j = 1; j <= n; ++j) {
        sum += j;
    }

    printf("Sum of n number = %d", sum);
  
  
  return 0;
}

