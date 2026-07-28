#include <stdio.h>

int main() {
    int arr[3][2];

    // Taking input
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Enter the value of arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Printing values
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            printf("The value of arr[%d][%d] is %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}