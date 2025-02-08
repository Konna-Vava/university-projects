#include <stdio.h>
int main(){
	char str1[100], str2[100];
	int i=0, j=0,n;
	printf("Enter the first string: ");
	gets(str1);
	printf("Enter the second string: ");
	gets(str2);
	printf("Enter the number of characters that you want to concatenate: ");
	scanf("%d", &n);
	while (str2[i]!='\0')
		i++;
	while (j!=n){
		str2[i]=str1[j];
		i++;
		j++;
	}
	str2[i]='\0';
	printf("\nThe final string is:\n");
	puts(str2);
	return 0;
}
