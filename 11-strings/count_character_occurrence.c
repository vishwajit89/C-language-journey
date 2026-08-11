#include <stdio.h>
#include <string.h>
int main(){
	int count = 0;
	char c = 'p';
	char str[] = "happy";
	for (int i = 0;i < strlen(str);i++)
	{
		if (str[i] == c){
			count++;
		}
	}
	printf("%d", count);
	return 0;
}