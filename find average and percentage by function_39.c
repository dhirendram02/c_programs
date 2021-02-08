#include <stdio.h>
float average (float,float,float);
float percentage (float,float,float);
int main() {
	
	float a,b,c,aver,perce;
	scanf("%f%f%f",&a,&b,&c);
	
	aver=average(a,b,c);
	perce=percentage(a,b,c);
	
	printf("%f",aver);
	printf("%f",perce);
	
	return 0;
}
  float average (float a,float b,float c)
  {
      float z;
      z=(a+b+c)/3;
      return(c);
  }
  float percentage (float a,float b,float c)
  {
      int y,v,w;
      v=a+b+c;
      w=150;
      y=v*w/100;
  }

