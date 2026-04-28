#include <stdio.h>
#include <string.h>

int main()
{
    char line[1024];
    fgets(line, sizeof(line), stdin);
    
    const char *bad_words[] = { "broccoli", "cauliflower", "cauliflowers", "collard greens" };

    char *token = strtok(line, " \t\n");
    while (token != NULL) {
        if (token = *bad_words[]) {
            printf("BLEEP");
        } else (token != *bad_words) {
           printf("%s", token);
        } 
        
        token = strtok(NULL, " \t\n");
    }
    
    return 0;
}
