#include <stdio.h>

int main(){
	int i, c, od=0, ev=0, arr[10];
	printf("Enter an array of integers: ");
	for(i=0;i<10;i++)
		scanf("%d", &arr[i]);
	for(i=0;i<3;i++){
		c=arr[i]%2;
		if(c==0)
			ev++;
		else
			od++;
	}
	if(ev>od){
		i=0;
		while((arr[i]%2)==0)
			i++;
		printf("%d", arr[i]);
	}
	else{
		i=0;
		while((arr[i]%2)!=0)
			i++;
		printf("%d", arr[i]);
		
	}
	return 0;
}
