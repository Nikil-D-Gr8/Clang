#include<stdio.h>

// Generate boolean values based on condition
void main()
{
    int num = 30;
    // && serves as logical AND operation
    if ((num % 2 == 0) && (num % 3 == 0))
    {
        printf("The number is divisible by 6  \n");
    } 
    // || serves as logical OR operation
    if ((num == 0) || (num > 0))
    {
        printf("The number is might be positive or zero ");
    }
}