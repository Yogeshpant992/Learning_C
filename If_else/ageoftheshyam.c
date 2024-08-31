#include<stdio.h>
int main ()
{
     int x,y,z ;

    printf("The age of the x = ");
    scanf("%d", & x);
    printf("The age of the y =");
    scanf("%d", & y);
    printf("The age of the z = ");
    scanf("%d",& z);
    if (x>y)
    {
        if(x > z)
        {
        printf("x is greatest of all");
        }
        else
        { 
        printf("z is greatest of all");
        }
}
    if(y>x)
    {
        if(y > z)
        {
       printf("y is greatest of all");
    }
    else 
    {
        printf("z is greatest of all");
    }
    }
    return 0 ;
}