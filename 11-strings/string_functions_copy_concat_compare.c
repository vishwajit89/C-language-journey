#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "Rocky";
    char s1[56] = "Rocky";
    char s2[56] = " bhai";

    char target[30];
    strcpy(target, st); // target now contains "Harry"

    strcat(s1, s2); // s1 now becomes "Harry bhai"

    int a = strcmp("deep", "joke"); // negative since 'd' comes before 'j'
    printf("%d",a);

    return 0;
}