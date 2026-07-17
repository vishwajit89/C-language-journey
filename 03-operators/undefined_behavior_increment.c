#include <stdio.h>

int main(){
	int a = 4;
	printf("%d %d %d\n",a,++a,a++);
	// order of evaluation of function arguments is unspecified in c
	// output can differ compiler to compiler, this is undefined behavior
	// not a reliable thing to predict, just good to know it exists
	return 0;
}