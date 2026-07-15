#include <stdio.h>
int main(){
	for(int i = 5; i; i--){   // loop runs as long as i is non-zero (truthy)
		printf("%d\n",i);
	}
	return 0;
}