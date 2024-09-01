#include <stdio.h>
int main()
{
    int x, y, z ;
    printf("Enter the numbers =");
    scanf("%d %d %d ", &x, &y, &z  );
    if(x>y)
    {
        if(x>z){
            printf("%d is greatest of all",x);
        }
        else 
        {
            printf("%d is greatest of all" ,z);
        }
    }
    if (y>x)
    {
        if(y>z)
        {
            printf("%d is greatest of all",y );
        }
        else 
        {
            printf("%d is greatest of all",z);
        }
    }
    return 0;
}