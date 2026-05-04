#include <stdio.h>

int main()
{
    int c, nl, tab, blnk;

    nl = 0;
    tab = 0;
    blnk = 0;

    while ((c = getchar()) != EOF) {
        
        if (c == '\n') {
            ++nl;
            printf("nl == %d\n", nl);
        } else if (c == '\t') {
            ++tab;
            printf("tab == %d\n", tab);
        } else if (c == ' ') {
            ++blnk;
            printf("blnk == %d\n", blnk);
        } else {
            printf("Your if statement might be broken.\n");
        }
    }
    return 0;
}
