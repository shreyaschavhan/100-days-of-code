// Q3. Write a program to check if the number is divisible by 97 or not

#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n % 97 == 0) {
        printf("The number %d is divisible by 97.\n", n );
    }
    else{
        printf("The number is not divisible by 97.\n" );
    }

    return 0;
}
