// Write a C program to calculate area of a rectangle
// a. Using Hard coded input
// b. Using inputs supplied by the user

#include <stdio.h>

int main(){
    int length, breadth;
    printf("Enter the value of length: ");
    scanf("%d\n", &length);
    printf("Enter the value of breadth: ");
    scanf("%d\n", &breadth);
    printf("The value of Area: %d\n", length * breadth);
    return 0;
}
