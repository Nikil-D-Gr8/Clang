#include <stdio.h>

void main()


{   
    //  The values of the assigned must be compatible with the data type, if we try to
    //  force a real number into int then only the int part will be
    //  stored and decimal will be truncated this issue might take 
    
    // I) Assigning type and  values seperately 
    int x;
    x = 10 ;
    
    // II ) Assigning type and value together
    int y = 20 ;
    printf(" The two variables are %d and %d\n",x,y);

    // III ) Assigning types together and values also together for multipe variables
    float m,n;
    m = n = 8.00 ;
    printf(" The two new variables are %.3f and %.2f\n",m,n);

    // IV ) assigning types and values at the same time for multiple variables
    int i , l = 7;
    printf(" The values are %d and %d\n",i,l);
    
    }