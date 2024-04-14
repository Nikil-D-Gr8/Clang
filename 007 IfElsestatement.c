#include<stdio.h>

void main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    // using the basic if / else statement, must use brackets to specify the 
    // conditon and also code block if condition satisfied
    if (a > b)
    {
        printf("%d is greater.", a) ;
    }
    else
    // added another if-else statement inside else as it is compleltely possible to do so.
    {
         if (b > a)
         {
            printf("%d is greater.", b) ;
         }
        else
        {
        printf("Both are equal.") ;
         }
        
    }
   
}