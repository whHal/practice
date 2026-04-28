#include <stdio.h>

int main()
{
    int user_num;
    int result;

    printf("Hello. Enter an integer, and the program will tell you if it is even or odd.\n\n");
    printf("Enter your number: ");
    scanf("%d", &user_num);
    printf("\n");

    result = user_num % 2;

    if (result == 0) {
        printf("Your number is even.\n");
    } else {
        printf("Your number is odd.\n");
    }

    return 0;
}
