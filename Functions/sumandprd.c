#include <stdio.h>
int sub(int x , int y)
{
    int k = x*y;
    int t = x+y;
    int z = k - t ;
    return z ;
    }
int main ()
{
    int a ;
    printf("ENter the number :");
    scanf("%d", & a);
    int b ;
    printf("ENter the number :");
    scanf("%d", & b);
    int p ;
    p = sub(a,b);
    printf("The result is :%d",p);
    return 0 ;
}