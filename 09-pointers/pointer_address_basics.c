#include <stdio.h>
int main(){
	int i = 72;
	int *j = &i;
	int k = 68;
	printf("the address of i is %p\n", &i);
	printf("the address of i is %p\n", j);
	printf("the address of i is %p\n", &k);
	return 0;
}