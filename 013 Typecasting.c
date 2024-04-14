#include <stdio.h>

void main() {
    // Explicit type casting
    int x = 5;
    float p = 3.14;
    int ar;
    ar = (int)(p * x * x); // Explicit type casting
    printf("The area is %d.\n", ar);

    double pe;
    pe = 2.0 * (double)p * (double)x;
    printf("The perimeter is %f.\n", pe);

    // Implicit type casting
    int num_int = 10;
    float num_float;
    num_float = num_int; // Implicit type casting
    printf("Implicit type casting: %f\n", num_float);
}
