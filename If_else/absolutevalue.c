#include<stdio.h>
int main ()
{ 
    int x ;
    printf("Enter the number =");
    scanf("%d",& x);
    if (x<0)
    {
        x = x*(-1) ;
        printf("The absolute value of the integer is = %d",x);
     }
     else 
     {
        printf("The absolute value of the integer is = %d",x);
     }
     return 0 ;
}