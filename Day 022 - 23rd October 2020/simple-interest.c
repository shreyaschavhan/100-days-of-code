// Write a program to calculate simple interest for a set of values representing principal, no of years and rate of interest.

#include <stdio.h>

int main(){
    int principal = 100, rate = 4, years = 1;
    int simple_interest = (principal * rate * years)/100;
    printf("Simple interest: %d\n", simple_interest );
    return 0;
}
