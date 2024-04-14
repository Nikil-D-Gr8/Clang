#include <stdio.h>

int main() {
    int a;
    
    // Prompt the user to enter a number
    printf("Enter a number: ");
    
    // Read the integer input from the user
    scanf("%d", &a);
    
    // Print the entered number
    printf("You entered: %d\n", a);
    printf("It's address is: %d\n",&a);
    
    return 0;
}


// // When using the & symbol with variable name we are basically asking the compiler to look at
// the address of the variable as & sign is what makes a variable a pointer to itself