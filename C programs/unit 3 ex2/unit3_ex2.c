#include <stdio.h>
int main(){
	int i,n,sum,arr[100];
	printf("Give 100 integers:\n");
	for(i=0;i<100;i++)
		scanf("%d",&arr[i]);
	printf("These are the pairs, that their sum is equal to 50:\n");
	for(i=0;i<99;i++){
		for(n=i+1;n<100;n++){
			sum=arr[i]+arr[n];
		    if(sum==50)
				printf("Pair (%d, %d)\n", arr[i], arr[n]);
		}
	}	
	return 0;
}
