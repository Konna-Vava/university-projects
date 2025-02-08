#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool getprime(int num); 

int main(){
	int num;
	printf("Give a number: ");
	scanf("%d", &num);
	printf("The number is prime\n");
	printf("%d", getprime(num));
	return 0;
}

bool getprime(int num){
	int i=2;
	if(num<2)
		return false;
	while(i<=sqrt(num)){
		if(num%i==0)
			return false;
		i++;
	}
	return true;
}
