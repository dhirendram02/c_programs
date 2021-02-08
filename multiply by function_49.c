#include <stdio.h>

int main() {

   int a,b;

   scanf("%d",&a);
   scanf("%d",&b);
   
   multiply_number(a,b);
  
   return 0;
} 
   //function define
   int multiply_number (int a,int b){
       
       int c;
       c= a*b;
       printf("%d",c);
   }
