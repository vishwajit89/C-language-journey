#include <stdio.h>
int main(){
	char str[10];
	for (int i = 0;i <9;i++){
		scanf(" %c",&str[i]); // space before %c skips leftover whitespace/newline safely
	}
	str[9] = '\0';
	printf("%s",str);
	return 0;
}