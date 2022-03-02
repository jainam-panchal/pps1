#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomNumberGenerator(int lower, int upper)
{
	int num;
	srand(time(NULL));
	num = (rand() % (upper - lower)) + lower;
	return num;
}

int main()
{
    int choice,upper,lower,Attempts;
    printf("\tTHE GUESSING GAME!\n\n");
    printf("Description:\nThe rules are simple! A number has been selected and you have to guess the number and you will have %d Attempts to guess the number.\n\n",Attempts);


    printf("Select Difficulty Level: ");
    printf("\n\t1. Easy\n\t2. Medium\n\t3. Hard\n\n");
    scanf("%d",&choice);

    switch(choice){
        case 1: printf("Difficulty Level: Easy\n\n");
                lower=0; upper=100;
                Attempts=10;
                break;

        case 2: printf("Difficulty Level: Medium\n\n");
                lower=0; upper=500;
                Attempts=20;
                break;

        case 3: printf("Difficulty Level: Hard\n\n");
                lower=0; upper=1000;
                Attempts=25;
                break;

        default:printf("Select Appropriate Difficulty Level\n\n");

    }
	int n = randomNumberGenerator(lower, upper);
	int count = 1;

	while (Attempts>0)
	{
		int guess;
		printf("Guess what number: ");
		scanf("%d", &guess);

		if (guess == n)
		{
			printf("\nNumber: %d\n", n);
			printf("Congratulations! You find it in %d steps\n", count);
			break;
		}
		else if (guess > n)
		{
			count += 1;
			Attempts -= 1;
			printf("\nSelect a Smaller Number, %d Attempts Left\n",Attempts);
		}

		else if(Attempts == 0){
            printf("Better Luck Next Time!\n\n");


		}
		else
		{
			count+=1;
			Attempts -=1;
			printf("\nSelect a Bigger Number %d Attempts Left\n",Attempts);

		}

	}

	return 0;
}
