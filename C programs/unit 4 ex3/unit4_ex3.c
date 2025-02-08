#include <stdio.h>
int main(){
	char str1[100], str2[100];
	int n1, n2, i=0, same=0;
	printf("Enter the first string: ");
	gets(str1);
	printf("Enter the second string: ");
	gets(str2);
	printf("Enter the number of characters, that you want to compare from the firt string: ");
	scanf("%d", &n1);
	printf("Enter the number of characters, that you want to compare from the second string: ");
	scanf("%d", &n2);
	if(n1==n2){
		while(i<n1){
			if(str1[i]==str2[i])
				i++;
			else break;
		}
		if(i==n1){
			same=1;
			printf("The two strings are equal");
		}
	}
	if(n1!=n2)
		printf("The two strings are not equal");
	if(same==0){
		if(str1[i]>str2[i])
			printf("\nThe first string is greater than the second");
		else if(str1[i]<str2[i])
			printf("\nThe second string is greater than the first");
	}
	return 0;
}
