#include <stdio.h>

#define Y_EX_RATE 0.0063
#define K_EX_RATE 0.11
#define P_EX_RATE 1.35
#define U_EX_RATE 0.15

int main()
{
    double user_amt;
    char unit_type;
    double result;

    printf("Hello. Please enter a <number> followed by a currency type (y = yen, k = kroner, p = pounds, u = yuan) to convert the <number> to dollars.\n\n");
    printf("Enter your value immediately followed by the unit type here: ");
    scanf("%lf", &user_amt);
    scanf("%c", &unit_type);
    printf("\n\n");
    
    switch (unit_type) {
        case 'y':
            result = user_amt * Y_EX_RATE;
            printf("%.2lf Japanese yen is worth %.2lf American dollars.\n", user_amt, result);
            break;
        case 'k':
            result = user_amt * K_EX_RATE;
            printf("%.2lf Norwegian kroner is worth %.2lf American dollars.\n", user_amt, result);
            break;
        case 'p':
            result = user_amt * P_EX_RATE;
            printf("%.2lf British pounds is worth %.2lf American dollars.\n", user_amt, result);
            break;
        case 'u':
            result = user_amt * U_EX_RATE;
            printf("%.2lf Chinese yuan is worth %.2lf American dollars.\n", user_amt, result);
            break;
        default:
            printf("Invalid currency type: %c\n", unit_type);
            return 1;
    }
    
    return 0;
}
          
