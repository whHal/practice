#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  srand(time(0)); /* This seeds the random number generator. */
 
  int ans = rand() % 100 + 1; /* The code ans is set to is what actually generates the random number. */ 
  int guess = 0;              /* This variable is where the user's guess will be stored. */ 
  int guesses = 0;            /* This variable is where the user's number of guesses will be stored. */
  
  printf("Welcome to the Number Guessing Game!\n");
  printf("I'm thinking of a number between 1 and 100.\n");
  
  printf("Enter your guess: ");
  scanf("%d", &guess);
  ++guesses;
  
  while (guess != ans)
  {  
    if (guess < ans) {
      printf("%d is too low! Try again: ", guess);
      scanf("%d", &guess);
	  ++guesses;
    } else if (guess > ans) {
        printf("%d is too high! Try again: ", guess);
        scanf("%d", &guess);
		++guesses;
    } 
  }
  
  if (guess == ans && guesses == 1) {
    printf("Great job! The answer was %d. You got it on the first try!\n", ans);
  } else if (guess == ans)
    printf("Congratulations! The answer was %d. It took you %d guesses.\n", ans, guesses);
  return 0;
}
  

