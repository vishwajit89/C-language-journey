#include <stdio.h>
int * sum (int a , int b){
	int s = a+b;
	int * ptr = &s;
	printf("the sum is %d\n",s);
	return ptr;
	// returning address of a local variable, s no longer exists after function ends
	// this is technically undefined behavior (dangling pointer), just for learning here
}
float * average(int a ,int b){
	float avg = (a +b)/2.0;
	float*ptr = &avg;
	printf("the average is %f\n",avg);
	return ptr;
}
int main(){
	int x = 4;
	int y = 6;
	int * ptr1;
	float * ptr2;
	ptr1 = sum(x,y);
	ptr2 = average(x,y);
	printf("the address of sum is %p and of average is %p",ptr1,ptr2);
	return 0;
}