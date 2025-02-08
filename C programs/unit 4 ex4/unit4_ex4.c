#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	int i, len;
	printf("Enter a string: ");
	gets(str);
	len=strlen(str);
	printf("The first character is %c and the last character is %c", str[0], str[len-1]);
	while(str[0]==' '){
		for(i=0;i<len;i++)
			str[i]=str[i+1];
		len--;
	}
	while(str[len-1]==' '){
		str[len-1]='\0';
		len--;
	}
	printf("\nThe new string is: ");
	puts(str);
	printf("Now, the first character is %c and the last character is %c", str[0], str[len-1]);
	return 0;
}
