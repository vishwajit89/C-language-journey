#include <stdio.h>
#include <string.h>
struct employee
{
	int code;
	float salary;
	char name[10];
};
void show (struct employee e);
void show (struct employee e){
	printf("code is %d\nsalary is %f\nName is %s\n",e.code,e.salary,e.name);
}
int main(){
	struct employee e1;
	e1.code = 5345;
	strcpy(e1.name,"harry");
	e1.salary = 45.44;
	show(e1);
	return 0;
}