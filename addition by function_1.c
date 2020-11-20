#include <stdio.h>

int main() {

   int a,b;

   scanf("%d",&a);
   scanf("%d",&b);
   
   add_number(a,b);
  
   return 0;
} 
   //function define
   int add_number (int a,int b){
       
       int sum;
       sum= a+b;
       printf("%d",sum);
   }
