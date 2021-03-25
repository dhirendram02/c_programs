#include <stdio.h>
int add_num(int *,int *);
int main() {
    int fno,sno,sum;
    scanf("%d%d",&fno,&sno);
    sum=add_num(&fno,&sno);
    printf("%d",sum);
	
	return 0;
}
int add_num(int *fno,int *sno)
{
    int sum;
    sum=*fno + *sno ;
    return sum;
}

