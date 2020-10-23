// Calculate the area of a circle and modify the same program
// to calculate the volume of a cylinder given its radius and
// height

#include <stdio.h>

int main(){
    float pi = 3.14;
    int radius = 3;
    printf("The area of circle is: %f \n", pi * radius * radius);
    int height = 5;
    printf("The volume of cylinder is: %f \n", pi*radius*height );
    return 0;
}
