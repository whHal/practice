#include <stdio.h>

int main()
{
    char str[3][250];

    printf("Hello. Enter three words: \n\n");

    /* string one */
    printf("Word 1: ");
    scanf("%s", str[0]);
    printf("\n\n");

    /* string two */
    printf("Word 2: ");
    scanf("%s", str[1]);
    printf("\n\n");

    /* string three */
    printf("Word 3: ");
    scanf("%s", str[2]);
    printf("\n\n");

    printf("Your Input: ");
    printf("%s, ", str[0]);
    printf("%s, ", str[1]);
    printf("%s.\n", str[2]);

    return 0;
}
