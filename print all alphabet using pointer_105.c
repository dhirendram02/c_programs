#include <stdio.h>

int main() {
  char alphabet[27];
  int x;
  char *ptr;
  
  ptr=alphabet;
  for(x=0;x<26;x++)
  {
      *ptr=x+'A';
       ptr++;
       
  }
  ptr = alphabet;
  for(x=0;x<26;x++)
  {
      printf("%c",*ptr);
      ptr++;
  }
	return 0;
}

