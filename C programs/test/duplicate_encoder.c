#include <stdio.h>

void DuplicateEncoder(char *);

int main(){
	char str[100], str_new[100];
	printf("Enter a string: ");
	gets(str);
	printf("The new string is: ");
	DuplicateEncoder(str);
	puts(str);
	return 0;
}

void DuplicateEncoder(char str[]){
	int i=0, n=0, c1, c2;
	char ptr, ptr1;
	while(str[i]!='\0'){
		if('a'<=str[i] && str[i]<='z'){
			ptr=str[i];
        	c1=str[i]-'a';
        	n=i+1;;
    	}
    	else if('A'<=str[i] && str[i]<='Z'){
    		ptr=str[i];
        	c1=str[i]-'A';
        	n=i+1;
    	}
		while(str[n]!='\0'){
			if('a'<=str[n] && str[n]<='z'){
        		c2=str[n]-'a';
    		}
    		else if('A'<=str[n] && str[n]<='Z'){
        		c2=str[n]-'A';
    		}
    		if(c1==c2){
    			break;
			}
			n++;
		}
		if(c1==c2){
			ptr1=ptr;
			n=0;
			while(str[n]!='\0'){
				if(str[n]==ptr1)
					str[n]=')';
				n++;
			}		
		}
		else {
			ptr1=ptr;
			n=0;
			while(str[n]!='\0'){
				if(str[n]==ptr1)
					str[n]='(';
				n++;
			}		
		}
			
		i++;
		n=0;	
	}	
}
