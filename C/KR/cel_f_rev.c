#include <stdio.h>

int main() 
{
    printf("\n");
    printf("For Loop Conv. Table (F --> C)\n");
    pritf("\n");

    int fahr;

    for (fahr = 300; fahr >= 0; fahr -= 20) {
        printf("%3d\t %6.0f\n", fahr, (5.0/9.0) * (fahr - 32));
    }

    return 0;
}
