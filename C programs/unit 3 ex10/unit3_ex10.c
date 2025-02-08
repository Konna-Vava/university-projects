#include <stdio.h>
int main(){
	int i, n, r, c, count=0, arr[100][100];
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
			if(arr[i][n]!=0)
				count=count+1;
		}
	}
	printf("The total number of non-zero elements in the array is %d", count);
	return 0;
}
