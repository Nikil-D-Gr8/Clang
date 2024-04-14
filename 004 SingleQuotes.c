// As single quotes char datatype has just one charaacter we can easily get its ASCI
// representation just by calling it appropriately , this feature is not available for 
// strings or other datatypes

#include<stdio.h>

int main()

{
    char letter = 'n';
    printf("The alpabet is %c and its ASCI value is %d",letter, letter);
}

// Basically all we did was call a number or decimal from a char which gave us 
// the ASCI number as that's the only possible number associated with that 
// char apart from address