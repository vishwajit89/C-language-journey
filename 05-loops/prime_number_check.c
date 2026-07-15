#include <stdio.h>
int main (){
	int n = 8;
	int not_prime = 0;

	if (n == 0 || n ==1){
		not_prime = 1;
	}
	for (int i = 2; i < n; i++)
	{
		if (n%i == 0){
			not_prime = 1;
			break;
		}
	}
	if (not_prime){
		printf("%d is not prime number\n",n);
	}
	else {
		printf("%d is prime number\n" , n);
	}
	return 0;
}