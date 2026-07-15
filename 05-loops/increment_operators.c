#include <stdio.h>
int main (){
	int i = 5;
	printf("the value of i is %d\n",i);
	i = i + 5;
	printf("the value of i is %d\n",i);
	printf("the value of i is %d\n",i++);
	printf("the value of i is %d\n",i);
	i +=2;
	printf("the value of i is %d\n", i);
	i+=7;
	printf("the value of i is %d\n",i);
	// i++ prints i first then increments (post increment)
	// ++i increments first then prints (pre increment)
	return 0;
}