#include <stdio.h>
int main(){
	float i,n;
	int sum;
	printf("Give 2 floating point numbers: \n");
	scanf("%f%f",&i,&n);
	sum=i+n;
	printf("The values of variables i, n and sum are: %f, %f, %d",i,n,sum);
	return 0;
}
