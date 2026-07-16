#include <stdio.h>
int change(int a);
int change (int a){
	a = 77;
	return 0;
}
int main(){
	int b = 22;
	change(b); // value of b remains 22, function only changes its own local copy
	printf("b is %d",b);
	return 0;
}