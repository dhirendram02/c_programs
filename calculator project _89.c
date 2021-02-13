#include<stdio.h>
int add_num();
int sub_num();
int mul_num();
int div_num();
int main() {
    int cont;
    int num;
    cont = 0;
    while (cont==0) {
        printf ("Choices:\n1:Addition\n2:Subtraction\n3:Multiplication\n4:Divison\n*********\n");
        scanf("%d",&num);

        if (num == 1){
        //printf("addition");
        printf("You have selected addition\n");
        add_num();
        }
        else if (num==2) 
        {
        printf("You have selected subtraction\n");
        sub_num();
        
        } 
        else if (num==3)
        {
        printf("You have selected Multiplication\n");
        mul_num();
        }
        else if(num==4)
        {
        printf("You have selected Divison\n");
        div_num();
        }
        else {
        printf("other ");
        }
    printf(" \nDo you want to continue (0) or exit (1)?\n");
    scanf("%d",&cont);
    }
return 0;
}
//function define
 int add_num()
 {
    int a,b,sum;
    scanf ("%d",&a);
    scanf ("%d",&b);
    sum=a+b;
    printf("%d",sum);
 }

 int sub_num()
{
    int a,b,c;
    scanf ("%d",&a);
    scanf ("%d",&b);
    c=a-b;
    printf("%d",c);
}
int mul_num()
{
    int a,b,c;
    scanf ("%d",&a);
    scanf ("%d",&b);
    c=a*b;
    printf("%d",c);
}

int div_num()
{
    int a,b,c;
    scanf ("%d",&a);
    scanf ("%d",&b);
    c=a/b;
    printf("%d",c);
}





