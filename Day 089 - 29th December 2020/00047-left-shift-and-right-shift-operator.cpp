// << (left shift) Takes two numbers, left shifts the bits of the first operand,
// the second operand decides the number of places to shift. Or in other words
// left shifting an integer “x” with an integer “y” (x<<y) is equivalent to multiplying
// x with 2^y (2 raise to power y).

/* C++ Program to demonstrate use of left shift
operator */
#include<stdio.h>
int main()
{
	// a = 5(00000101), b = 9(00001001)
	unsigned char a = 5, b = 9;

	// The result is 00001010
	printf("a<<1 = %d\n", a<<1);

	// The result is 00010010
	printf("b<<1 = %d\n", b<<1);
	return 0;
}


// >> (right shift) Takes two numbers, right shifts the bits of the first operand,
// the second operand decides the number of places to shift.Similarly right shifting (x>>y)
// is equivalent to dividing x with 2^y.

#include <stdio.h>

using namespace std;
int main()
{
    // a = 5(00000101), b = 9(00001001)
    unsigned char a = 5, b = 9;

    // The result is 00000010

    printf("a>>1 = %d\n", a >> 1);

    // The result is 00000100
    printf("b>>1 = %d\n", b >> 1);
    return 0;
}
