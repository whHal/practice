#include <stdio.h>

int main()
{	
	int arr[3];
	
	setbuf(stdout, NULL);
	
	printf("\033[2J\033[H");  /* These are commands that tell the cursor where to appear within the shell */
	
	printf("Please enter three values: \n\n");
	
	printf("Value 1: \n\n");
	printf("Value 2: \n\n");
	printf("Value 3: ");
	
	printf("\033[3;10H");
	scanf("%d", &arr[0]);
	
	printf("\033[5;10H");
	scanf("%d", &arr[1]);

	printf("\033[7;10H");
	scanf("%d", &arr[2]);
	
	if (arr[0] > arr[1]) {
		int temp;
		temp = arr[0];
		arr[0] = arr[1];
		arr[1] = temp;
	
	}
	
	if (arr[1] > arr[2]) {
		int temp;
		temp = arr[1];
		arr[1] = arr[2];
		arr[2] = temp;
	}
	
	if (arr[0] > arr[1]) {
		int temp;
		temp = arr[0];
		arr[0] = arr[1];
		arr[1] = temp;
	
	}
	
	printf("\nSorted: ");
	for (int i = 0; i < 3; ++i) {
		
		if (i > 0) {
			printf(", ");
		}
		
		printf("%d ", arr[i]);
	}
	
	printf("\n");
	
	return 0;
}
	