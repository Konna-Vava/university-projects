#include <stdio.h>
#include <string.h>
int main(){
	char ch, new_ch, str[100];
	int i, len;
	printf("Enter a string: ");
	gets(str);
	len=strlen(str);
	printf("Which character do you want to replace? : ");
	scanf("%c", &ch);
	getchar();
	printf("Enter the character that would replace it: ");
	scanf("%c", &new_ch);
	for(i=0;i<len;i++){
		if(str[i]==ch)
			str[i]=new_ch;
	}
	printf("The new string is: ");
	puts(str);
	return 0;
}
