#include <stdio.h>
#include <string.h>
int main(){
	
	char adr[100];
	int len,i;
	printf("Enter your address: \n");
	gets(adr);
	len=strlen(adr);
	printf("Your address is: \n");
	for(i=0;i<len;i++){
		if(adr[i]==' '){
		printf("\n");
		continue;
		}
	    printf("%c",adr[i]);
	}
	return 0;
}
