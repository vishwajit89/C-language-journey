#include <stdio.h>
int main(){
	char st[30];
	fgets(st, sizeof(st), stdin); // safe alternative to gets(), prevents buffer overflow
	puts(st);
	printf("hey");
	return 0;
}