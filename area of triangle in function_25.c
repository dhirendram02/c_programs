#include <stdio.h>
int area (int a,int b,int c);

int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	
	area(a,b,c);
	

}
int area (int a,int b,int c)
{
    float s,ar;
    s=(a+b+c)/2;
    ar= (s*(s-a)*(s-b)*(s-c));
    printf ("%f",ar);
}
