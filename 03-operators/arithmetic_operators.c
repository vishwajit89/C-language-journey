#include <stdio.h>
int main ()
{
	int a = 15;
	int b = 5; 
	int c = a + b ;
	printf ("the value of a is %d and value of b is %d and sum is %d\n", a,b,c);
	//modules operator are used to get the reminder 
	printf ("the reminder when a is divided by b is: %d\n", a%b);
	//this does not work for exponentiation in c 
	// int d = a^b ;
	return 0 ;
}
	