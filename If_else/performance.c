#include <stdio.h>
int main ()
{ int x ;
 printf("Enter percantage = ");
 scanf("%d", & x);
 if ( x>90)
 {
    printf("A grade");
 }
 else if ( x>70)
 {
    printf("B grade");
 }
 else if (x>50)
 {
    printf("C grade ");
 }
 else 
 {
    printf("D grade");
 }
 return 0 ;
}
