#include <stdio.h>
int main(){
	int marks[90]; // reserve space to store 90 integers

	marks[0] = 55;
	marks[1] = 88;
	// valid indices go from 0 to 89, not till 90, since array size is 90
	printf("marks 0 and marks 1 is %d and %d",marks[0],marks[1]);

	return 0;
}