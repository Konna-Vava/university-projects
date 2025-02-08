#include <stdio.h>
int main(){
	float i;
	int n, right_digit;
	printf("Give a floating point number: ");
	scanf("%f",&i);
	n=(int)i;
	right_digit=n%10;
	printf("The rightmost digit of the integral part of the number is: %d",right_digit);
	
	return 0;
	
}
