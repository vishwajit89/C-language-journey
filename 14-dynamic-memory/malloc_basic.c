#include <stdio.h>
#include <stdlib.h>
int main (){
	int n;
	int*ptr;
	scanf("%d",&n);
	ptr = (int*) malloc(n * sizeof(int));
	if (ptr == NULL){
		printf("memory allocation failed\n");
		return 1;
	}
	free(ptr); // always free memory allocated with malloc to avoid memory leak
	return 0;
}