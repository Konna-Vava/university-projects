#include <stdio.h>
int main(){
	int i, n, k, arr[100];
	printf("Give the length of the array: ");
	scanf("%d", &k);
	printf("Give %d integers:\n", k);
	for(i=0;i<k;i++)
		scanf("%d", &arr[i]);
	printf("The second element is %d and the second last element is %d", arr[1], arr[k-2]);
	n=arr[1];
	arr[1]=arr[k-2];
	arr[k-2]=n;
	printf("\nAfter the interchange the second element is %d and the second last element is %d", arr[1], arr[k-2]);
	
	return 0;
}
