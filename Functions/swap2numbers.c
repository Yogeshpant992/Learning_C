#include <stdio.h>
int main ()
{
    int a ;
    printf("The number a is :");
    scanf("%d", & a);
    int b ;
    printf("The number b is :");
    scanf("%d", & b);
    a = a + b ;
    b = a - b ;
    a = a - b ;
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    return 0 ;
    }