#include <stdio.h>
int main(){
	int  a = 77;
	int *ptr = &a;
	printf("the address of a is %p\n",(void*)&a);
	printf("the address of a is %p\n",(void*)ptr);
	ptr++;
	printf("the value of ptr is %p\n",(void*)ptr);
	return 0;
}