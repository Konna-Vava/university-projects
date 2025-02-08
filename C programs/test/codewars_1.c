#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char *DuplicateEncoder(char *);

int main(){
	char str[100], *arr;
	printf("Enter a string: ");
	gets(str);
	printf("The new string is: ");
	arr=DuplicateEncoder(str);
	puts(arr);
	return 0;
}

char *DuplicateEncoder(char *word)
{
  int table[256] = {0};
  int len = strlen(word);
  int i;
  char *out = calloc(len+1, sizeof(char));
  
  for (i = 0; i < len; i++)  table[toupper(word[i])]++;
  for (i = 0; i < len; i++) 
  {
      if (table[toupper(word[i])] == 1)  out[i] = '(';
      else                               out[i] = ')';
  }
  
  return out;
}
