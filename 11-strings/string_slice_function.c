#include <stdio.h>

char* slice(char str[], int m, int n){
    char *ptr = &str[m];
    ptr[n - m] = '\0'; // subtract m since ptr is now shifted to start at index m
    return ptr;
}

int main(){
    char str[] = "Harry bhai";
    printf("%s", slice(str, 1, 7));
    return 0;
}