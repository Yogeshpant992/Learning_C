#include <stdio.h>
int main ()
{
    int x ;
    printf("Enter the number of x :");
    scanf(" %d",& x);
    int y ;
    printf("Enter the number of y :");
    scanf(" %d",& y);
    int temp = x;
    x = y;
    y = temp ;
    printf("The value of x is %d\n", x);
    printf("The value of y is %d\n", y);
    return 0 ;
}