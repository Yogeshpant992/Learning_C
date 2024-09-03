#include<stdio.h>
int main ()
{
    int x ;
    printf("Enter the number = ");
    scanf("%d", &x);
    if (x%3==0 || x%5==0)
    {
        if (x%15==0)
        {
            printf("The number %d is divsible by 3 and 5 and 15",x);
        }
        if (x%15!=0)
        {
            printf("The number %d is divisble by 3 and 5 but not by 15",x );
        }
    }
    else
    {
        printf("The number %d is not divisble by 3 and 5",x);
    }
}