#include<stdio.h>
int rect_area(int l,int w);
int rect_perimeter(int l,int w);

int main()
{
     int a,b,x,y;
     
     scanf("%d",&a);
     
     scanf("%d",&b);
     x=rect_area(a,b); 
     y=rect_perimeter(a,b);
     printf("\nArea of Rectangle = %d\n\nPerimeter of Rectangle = %d",x,y);
     return 0;
}
int rect_area(int l,int w)
{
     int area;
     area=l*w;
     return area;
}
int rect_perimeter(int l,int w)
{
     int p;
     p=2*(l+w);
     return p;
}
