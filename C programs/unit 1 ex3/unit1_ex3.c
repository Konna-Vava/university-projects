#include <stdio.h>
#include <string.h>
int main(){
	char a[100];
	int len,i,vow=0;
	printf("Enter a string: ");
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++){
        if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
		vow=vow+1;
	}
	printf("\nThere are %d vowels in the string",vow);
	return 0;
}
