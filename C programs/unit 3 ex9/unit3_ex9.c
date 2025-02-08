#include <stdio.h>
int main(){
	int i, n, r, c, pr=1, arr[100][100];
	printf("Give the number of rows: ");
	scanf("%d", &r);
	printf("Give the number of columns: ");
	scanf("%d", &c);
	printf("Enter the values of a %dx%d array\n", r, c);
	for(i=0;i<r;i++){
		for(n=0;n<c;n++)
			scanf("%d", &arr[i][n]);
	}
	if(r==c){
		for(i=0;i<r-1;i++)
			pr=pr*arr[i][i+1];
	}
	else if(r<c){
		for(i=0;i<r;i++)
			pr=pr*arr[i][i+1];
	}
	else{
		for(i=0;i<c-1;i++)
			pr=pr*arr[i][i+1];
	}
	printf("The product of the elements that are stored on the diagonal above the main diagoanl is %d", pr);
	return 0;
}
