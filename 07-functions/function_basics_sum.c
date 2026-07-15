#include <stdio.h>
int sum(int, int);

int sum(int x, int y)
{
    return x + y;
}

int main()
{
    int a = 3, b = 5;
    int c = sum(a, b);
    printf("The sum of %d and %d is %d\n", a, b, c);

    int a1 = 13, b1 = 47;
    int c1 = sum(a1, b1);
    printf("The sum of %d and %d is %d\n", a1, b1, c1);

    int a2 = 56, b2 = 44;
    int c2 = sum(a2, b2);
    printf("The sum of %d and %d is %d\n", a2, b2, c2);

    return 0;
}