#include <stdio.h>
int main(){
	int arr[10];
	int i,n=9,k=2;
	printf("Enter 10 integers:\n");
	for(i=0;i<=n;i++)
		scanf("%d",&arr[i]);
	for(i=0;i<=n;i++){
		if(i>k){
			printf("\n");
			k=k+3;
		}
		printf("%d, ",arr[i]);
	}
	return 0;
}
