#include <stdio.h>

int main() 
{
    int c;
    int space = 1;

    while ((c = getchar()) != EOF) { 

        if (c != ' ') {
        
            putchar(c);
            space = 0;
        
        } else if (c == ' ' && space == 0) {
        
            putchar(c);
            space = 1;
        
        } else {
            
            ;

        }   

    }
    
    return 0;
}
