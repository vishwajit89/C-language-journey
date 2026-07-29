#include <stdio.h>
int main(){
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	int *ptr = a;
	printf("the value at address %p is %d",ptr+3,*(ptr+3));
	return 0;
}