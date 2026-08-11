#include <stdio.h>
#include <string.h>
typedef struct employee
{
	int code; // this declares a new user defined data type
	float salary;
	char name [10];
}
emp; // semicolon is important

int main(){
	emp e1;
	emp *ptr1 = &e1;
	e1.code = 4511;
	strcpy(e1.name ,"harry");
	e1.salary = 54.44;
	printf("%d %f %s\n",e1.code ,e1.salary,e1.name);
	return 0;
}