#include <stdio.h>

int main()
{
	char operation;
	double operand1, operand2;
	
	printf("Hello. Please input the operation you would like to perform, followed by your two numbers.\n\n");
	
	printf("Input your values here: ");
	
	scanf(" %c %lf %lf", &operation, &operand1, &operand2);
	
	printf("\n\n");
	
	if (operation == '+') {
	
		double sum;
		sum = operand1 + operand2;
		printf("Your sum: %lf\n\n", sum);
	
	} else if (operation == '-') {
	
		double diff;
		diff = operand1 - operand2;
		printf("Your difference: %lf\n\n", diff);
	
	} else if (operation == '*') {
		
		double product;
		product = operand1 * operand2;
		printf("Your product: %lf\n\n", product);
		
	} else if (operation == '/') {
		
		double quotient;
		quotient = operand1 / operand2;
		printf("Your quotient: %lf\n\n", quotient);
		
	} else {
		printf("That's not something that I recognize.");
	}

	return 0;
}