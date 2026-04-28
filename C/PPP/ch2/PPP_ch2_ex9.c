#include <stdio.h>
#include <string.h>

int main()
{
    int user_num;

    printf("Hello. Enter a number between 0 - 10: ");
    scanf("%d", &user_num);
    printf("\n\n");

    switch (user_num) {
        case 1:
            printf("Your number is: one.\n");
            break;
        case 2:
            printf("Your number is: two.\n");
            break;
        case 3:
            printf("Your number is: three.\n");
            break;
        case 4:
            printf("Your number is: four.\n");
            break;
        case 5:
            printf("Your number is: five.\n");
            break;
        case 6:
            printf("Your number is: six.\n");
            break;
        case 7:
            printf("Your number is: seven.\n");
            break;
        case 8:
            printf("Your number is: eight.\n");
            break;
        case 9:
            printf("Your number is: nine.\n");
            break;
        case 10:
            printf("Your number is: ten.\n");
            break;
        default:
            printf("That's not a number I know.\n");
            break;
    }
}
