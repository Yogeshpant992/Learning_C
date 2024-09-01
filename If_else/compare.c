#include <stdio.h>
int main ()
{
    int x ;
    printf("Enter the number = ");
    scanf("%d", &x );
    if (x%5 ==0)
    {
        printf("x is divisble by 5 ");
    }
    else 
    {
         printf("x is not divisble by 5");
        
    }
return 0 ;
}