#include <stdio.h>

int main()
{
	double val1, val2;
	double sum, difference, product, ratio;
	
	setbuf(stdout, NULL);
	
	printf("\033[2J\033[H");
	
	printf("Hello! Welcome to PPP, Ch. 2, ex. 4.\n");
	printf("Please enter two floating-point (decimal) values: \n\n");
	printf("Value 1: \n");
	printf("\nValue 2: \n\n");
	
	printf("\033[4;10H");
	scanf("%lf", &val1);
	
	printf("\033[6;10H");
	scanf("%lf", &val2);
	
	if (val1 > val2) {
		printf("\n%lf is greater than %lf\n\n", val1, val2);
	} else if (val1 < val2) {
		printf("\n%lf is less than %lf\n\n", val1, val2);
	} else {
		printf("\n%lf is equal to %lf", val1, val2);
	}
	sum = val1 + val2;
	difference = val1 - val2;
	product = val1 * val2;
 	ratio = val1 / val2;
	
	printf("\033[9;1H");
	
	printf("\nThe sum of your two numbers is: %lf\n\n", sum);
	printf("The difference between your two numbers is: %lf\n\n", difference);
	printf("The product of your two numbers is: %lf\n\n", product);
	printf("The ratio of your numbers is: %lf\n\n", ratio);
	
	return 0;
}	