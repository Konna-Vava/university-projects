#include <stdio.h>
int main(){
	int i, n, r, c, sum=0, arr[100][100];
	float mo;
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
		for(n=0;n<c;n++)
			sum=sum+arr[i][n];
	}
	mo=sum/2.0;
	printf("The sum and the mean of the elements of the array are %d and %f", sum, mo);
	
	return 0;
}
