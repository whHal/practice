#include <stdio.h>

int main()
{
	float mi;
	float km;
	
	printf("Welcome to my miles to kilometers conversion program!\n");
	
	printf("Please enter your value in miles: ");
	scanf("%f", &mi);
	
	km = mi * 1.609f;  /* 1 mi is approximately equal to 1.609 km, so not a magic number */
	
	printf("%f miles is approximately %f kilometers\n", mi, km);
	
	return 0;
}