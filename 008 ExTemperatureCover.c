#include <stdio.h>

float CTF(float num);
float FTC(float num);
void main()
{
    int opt;
    float celsi , faren;
    printf("1)Fahrenheit to Celsius \n2)Celsius to Fahrenheit \n Pick the number Please: ");
    scanf("%d",&opt);
    if (opt == 2)
    {
        printf("Celsius is : ");
        scanf("%f",&celsi);
        printf("\n The Fahrenheit of %.2f Celsius is %.2f ",celsi,FTC(celsi));
    }    
    else  
    {
        if (opt == 1)
        {
            printf("Fahrenheit is : ");
            scanf("%f",&faren);
            printf("\n The Celsius of %.2f Fahrenheit is %.2f ",faren,CTF(faren));
        }
        else
        {
            printf("Give a valid option man!");
        }
    }
}
float FTC(float num)
{
    return ((num - 32) * (5.0 / 9.0));
}

float CTF(float num)
{
    return ((num * (9.0 / 5.0)) + 32);
}