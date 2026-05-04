#include <stdio.h>

/*

Notes:

This exercise calls for a program that prints "its input one word per line."

How I read that is that K&R is asking for each new word to be printed onto
a new line. Therefore, the question is how do we go about telling the
program what is and is not a new word. 

Thinking about the previous code block, the toy 'wc' program, K&R counted 
new words by checking the spaces that go in-between words in an English 
sentence, and so therefore we will do the same here, just instead of 
incrementing we will do a newline.

*/

int main()
{
    int c;
     
    while ((c = getchar()) != EOF)
    
        if (c == ' ') {

            printf("\n");

        } else {
            
            putchar(c);

        }
    
    return 0;
} 
            
