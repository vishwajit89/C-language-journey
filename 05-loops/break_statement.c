#include <stdio.h>
int main (){
	for(int i = 0; i <15; i++)
	{
		if (i == 5){
			break;
		}
		printf("i is %d\n",i);
	}
	printf("for loop is done!");
	return 0;
}