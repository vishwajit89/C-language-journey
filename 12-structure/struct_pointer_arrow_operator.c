#include <stdio.h>
#include <string.h>
struct employee
{
	int code;
	float salary;
	char name[10];
};
int main (){
	struct employee e1;
	e1.code = 45;
	struct employee *ptr;
	ptr = &e1;
	printf("%d",ptr->code); // same as (*ptr).code
	return 0;
}