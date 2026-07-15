#include <stdio.h>
int main(){
	int n = 3;
	for (int i = 0; i<n; i++)
	{
		// no of stars in each row = 2*i+1
		for (int j = 0; j<2*i+1;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}