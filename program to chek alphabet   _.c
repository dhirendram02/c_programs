#include<stdio.h>
int power(int ,int );
int main()
{
    char c;
    scanf ("%c",&c);
    if ((c>='a' && c<='z') && (c>='a' && c<= 'z'))
    {
        printf("%c is an alphabet.",c);
        
    }
    else 
    {
        printf("%c is not an alphabet ", c);
    }
    return 0;
}
