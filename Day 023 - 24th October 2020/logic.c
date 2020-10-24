// We have to generate a random number first to have our user guess it correctly.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int number;
    srand(time(0));
    number = rand()%100 + 1; // Generates a number between 1 to 100
    printf("The number is %d.", number);
    return 0;
}