#include <stdio.h>

/* Celsius to Fahrenheit Conversion Table */

int main() 
{
    printf("\n");
    printf("Celsius to Fahrenheit Conversion Table\n"); // Header
    printf("\n");
    
    enum table_params { LOWER = 0, UPPER = 300, STEP = 20 };
    
    float celsius = LOWER;
    float fahr;
    int loop = 0; 

    while (celsius <= UPPER) {
        printf("%3.0f\t %6.1f\n", celsius, fahr = celsius * (9.0/5.0) + 32); 
        celsius = celsius + STEP;
        
       }

    return 0;    
}

