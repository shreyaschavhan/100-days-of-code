// Write a program to convert Celcius (Centigrade degrees temperature to Farenheit)

#include <stdio.h>

int main(){
    float celcius;
    printf("Enter the value of celcius:\n");
    scanf("%f\n", &celcius);
    float Farenheit = (celcius * 9/5) + 32;
    printf("The value in Farenheit: %d\n", Farenheit);
    return 0;
}
