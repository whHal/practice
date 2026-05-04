#include <stdio.h>

int main()
{
    int c = 0; 
    int i = 0;
    int count = 0;
    int wlength[15];  
    
    for (i = 0; i < 15; ++i) {
        wlength[i] = 0;
    }

    while ((c = getchar()) != EOF) { 
        
        if (c != ' ' && c != '\n' && c != '\t') {
            ++count;
            ++wlength[count];
        
        } else if (count > 15) {  
            printf("Error. Cannot hold words of that size.\n");  
            printf("Count detected %d many characters.\n", count); 
            return 1; 
        }
    }
    
    for (i = 0; i <= 15; ++i) { 
    
        printf("%d\n", wlength[i]);
    
    }
    
    return 0;
}

