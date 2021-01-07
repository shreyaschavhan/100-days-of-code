#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int number, guess;
    int no_of_guess = 1;
    srand(time(0));
    number = rand()%100 + 1; // Generates a number between 1 to 100
    do
    {
        printf("Guess a number between 1 to 100: ");
        scanf("%d", &guess);
        if(guess > number){
            printf("Guess Lower!\n");
        }
        else if(guess < number){
            printf("Guess Higher!\n");
        }
        else{
            printf("You have guessed the number in %d attempts\n", no_of_guess);
        }
        no_of_guess++;
    } while (guess != number);

    return 0;
}
