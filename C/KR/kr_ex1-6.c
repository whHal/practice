#include <stdio.h>

/* Verifies that "getchar() != EOF" is either 0 or 1 */

int main()
{
    int c;
    c = getchar() != EOF;
    printf("%d\n", c);
}
