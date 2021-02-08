#include<stdio.h>
void reverse_sentance();
int main()
{
    reverse_sentance();
    return 0;
}
  void reverse_sentance()
  {
      char c;
      scanf("%c",&c);
      if(c!='\n')
      {
          reverse_sentance();
          printf("%c",c);
      }
  
}
