#include <stdio.h>
int main(){
	int i, n, r, c, re, k=0, l=0, arr[100][100], even[100], odd[100];
	printf("Give the number of rows: ");
	scanf("%d", &r);
	printf("Give the number of columns: ");
	scanf("%d", &c);
	printf("Enter the values of a %dx%d array\n", r, c);
	for(i=0;i<r;i++){
		for(n=0;n<c;n++)
			scanf("%d", &arr[i][n]);
	}
	for(i=0;i<r;i++){
		for(n=0;n<c;n++){
			re=arr[i][n]%2;
			if(re==0){
				even[k]=arr[i][n];
				k++;
			}
			else{
				odd[l]=arr[i][n];
				l++;
			}
		}
	}
	printf("The even numbers of the array are:\n");
	for(i=0;i<k;i++)
		printf("%d ", even[i]);
	printf("\nThe odd numbers of the array are:\n");
	for(i=0;i<l;i++)
		printf("%d ", odd[i]);
	return 0;
}
