#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
// returned string has to be dynamically allocated and will be freed by the caller

char *alphabet_position(const char *);

int main(){
	char text[100];
	printf("Enter a string: ");
	gets(text);
	printf("The new string is: ");
	char *new_text=alphabet_position(text);
	puts(new_text);
	return 0;
}

char *alphabet_position(const char *text) {
  char *s,*s2;
  int i=0,pot=0;
  s=(char*)calloc(100,1);
  s2=(char*)calloc(100,1);
  while(i<strlen(text)){
    if((int)text[i]>=65&&(int)text[i]<=90)
      pot=(int)text[i]-64;
    else if((int)text[i]>=97&&(int)text[i]<=124)
      pot=(int)text[i]-96;
    else{
      i+=1;
      continue;
    }
    sprintf(s2,"%d",pot);
    if (i==strlen(text)||i==0)
      strcat(s,s2);
    else{
      strcat(s," ");
      strcat(s,s2);
    }
    i+=1;
  }
  return s;
}
