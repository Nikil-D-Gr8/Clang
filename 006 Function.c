#include <stdio.h>

void vanakam(int num);
// we are basically doing what is called a function prototyping wherein 
// we tell the compiler that there is a function with this name and type coming soon 
// so dont throw error and go look for it

void main(int numb)
{
    printf("Etachum Number Kundunga pa : ");
    scanf("%d",&numb);
    vanakam(numb);

}
// this is where we actually define the function , we give data type and write all conditions for it too
void vanakam(int num)
{
    for (int i = 0; i <= num; i++ )
        {
            printf("HELLO THERE!\n");
        }
}