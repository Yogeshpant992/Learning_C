#include <stdio.h>
int sum (int a)
{
	if(a==1 || a==0) return a ;
	int recAns = a+sum(a-1);
	return recAns ;
}
int main ()
{ int a ;
printf("Enter the number :");
scanf("%d", & a);
int fact = sum(a);
printf("%d",fact);
return 0 ;
}
