#include <stdio.h>
int main ()
{
    int a ;
    printf("Enter the number three digit  :");
    scanf("%d", & a);
    int t = a;
    int p = 0;
    while(a>0){//caluclation the invidual of the number
        int rem = a%10;
        p = (p) + (rem*rem*rem);
        a = a/10 ;
        // conditions 
     }
        if (t==p)
        {
            printf("The given number %d is armstrong number.",t);
        }
        else
        {
            printf("The given number %d is not armstrong number.",t);
        }
    
          return 0 ;
}