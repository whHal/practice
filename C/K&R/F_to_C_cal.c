#include <stdio.h>

int main() 
{
    int fahr;
    int cels; 
    
    printf("\n");
    printf("Please enter your local temperature in Fahrenheit: ");
    
    scanf("%d", &fahr);
    cels = (fahr - 32.0) / 1.8;
    
    printf("\n");
    printf("Your local temperature in Celsius is: ");  
    
    printf("%d\u00B0C\n", cels);
    printf("\n");

    return 0;
}
    
    
