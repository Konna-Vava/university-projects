#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char *alphabet_position(const char *);

int main(){
	char text[100];
	int i=0;
	printf("Enter a string: ");
	gets(text);
	printf("The new string is: ");
	char *new_text=alphabet_position(text);
	while(new_text[i]!='\0'){
		printf("%c ", new_text[i]);
		i++;
	}
	return 0;
}

char *alphabet_position(const char *text) {
  int i=0, n=-1, c1;
  int len = strlen(text);
  char *c = calloc(len*3+1, sizeof(char));
  while(text[i]!='\0'){
    if(text[i]>='a' && text[i]<='z'){
      c1=text[i]-'a'+1;
      n++;
      c[n]=c1;
	}
      
    if(text[i]>='A' && text[i]<='Z'){
      c1=text[i]-'A'+1;
      n++;
      c[n]=c1;
    }
    i++;
  }
  n++;
  c[n]='\0';
  return c;
}


