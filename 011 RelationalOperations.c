#include<stdio.h>

// Relational operations return boolean values
void main()
{
    int i = 100;
    int n = 200;
    int m = 200;
    int o = 300;
    if (i < n) 
        {
            printf("%d < %d \n",i,n);
        }
    if (o > n) 
        {
            printf("%d > %d \n",o,n);
        }
    if (m == n) 
        {
            printf("%d = %d \n",m,n);
        }
    if (i <= n) 
        {
            printf("%d <= %d \n",i,n);
        }
    if (o >= n) 
        {
            printf("%d >= %d \n",o,n);
        }
}