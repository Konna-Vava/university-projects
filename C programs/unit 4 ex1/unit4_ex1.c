#include <stdio.h>

int getlength(char str[]);

int main(){
	char str[100];
	int lng;
	printf("Enter a string: ");
	gets(str);
	lng=getlength(str);
	printf("The string you entered is: ");
	puts(str);
	printf("and it's length is %d", lng);
	return 0;
}

int getlength(char str[]){
	int i=0, count=0;
	while(str[i]!='\0'){
		count=count+1;
		i++;
	}
	return count;
}
