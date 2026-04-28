#include <stdio.h>

int main()
{
printf("\nLetters of the English Alphabet and their ASCII codes\n");
    for (char alph = 'a'; alph <= 'z'; ++alph) {
        printf("\n%c = %d\n", alph, alph);
    }
    
    return 0;
}
