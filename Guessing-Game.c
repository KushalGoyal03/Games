#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int number;
	int guess, nguesses =0;
	int i=1;
	
	srand(time(0));
	number = rand() % 1000 + 1;        //---> Generates a random number b/w 1 to 1000.
	
	//printf("The number is %d\n", number); 
	
	//Keep running the loop unitil the right number is guessed.
	
	do{
		printf("%d. Guess a number between 1 to 1000\n",i);
		scanf("%d", &guess);
		
		if(guess > number){
			printf("Lower number please!\n\n");
			}
		else if(guess < number){
			printf("Higher number please!\n\n");
			}
	    else{
	    	printf("\nCongratulations!\n\n");
	    	}
		nguesses++;
		i++;
		}while(guess != number);
	
	printf("You guessed the right number in %d attempts\n", nguesses);

	return 0;
	
}
