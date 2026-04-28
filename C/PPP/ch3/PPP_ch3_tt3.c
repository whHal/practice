#include <stdio.h>

int main()
{
printf("\nTable of Letters to ASCII values.\n");

    char alph = 'a';

    while (alph <= 'z') {
        printf("\n%c = %d\n", alph, alph);
        ++alph;
    }
    
    return 0;
}
