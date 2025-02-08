#include <stdio.h>
int main(){
	int count=0,sum=0,n=200,mod,i;
 
	for(i=1;i<=n;i++){
		mod=i%2;
		if(mod==0){
			count=count+1;
			sum=sum+i; 
		}	
	}
	printf("The count of even numbers between 1-200 is %d and their sum is %d",count,sum);
	
	return 0;
}
