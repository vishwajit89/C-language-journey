#include <stdio.h>
#include <string.h>
int main(){
	char c = 'p';
	int contain = 0;
	char str[] = "pubg";
	for (int i = 0;i < strlen(str);i++)
	{
		if (str[i] == c){
			contain = 1;
			break;
		}
	}
	if(contain){
		printf("yes\n");
	}
	else {
		printf("no");
	}
	return 0;
}