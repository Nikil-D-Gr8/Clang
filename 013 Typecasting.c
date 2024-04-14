#include<stdio.h>


void main()
{
    int x = 5;
    float p = 3.14;
    int ar;
    // we type cased by basically multiplyin with the data type
    ar = (int)(p*x*x);

    printf("The area is %d .\n",ar);

    double pe ;
    pe = 2.0*(double)p*(double)x;

    printf("The perimeter is %f .",pe);   
}