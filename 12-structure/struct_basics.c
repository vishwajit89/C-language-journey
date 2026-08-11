#include <stdio.h>
#include <string.h>
struct employee
{
	int code;
	float salary;
	char name[10];
};
int main(){
	struct employee e1;
	e1.code = 4522;
	strcpy(e1.name,"harry");
	e1.salary = 54.33;
	printf("%d %f %s",e1.code,e1.salary,e1.name);
	return 0;
}