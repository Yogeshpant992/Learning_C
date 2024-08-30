#include <stdio.h>
int main()
{
	int a ;
	printf("ENter the number :");
	scanf("%d", & a);
	int product = 1;
	for(int i=1; i<=a; i++){
		product = product * i ;
	}
	printf("The factorial of the number is :%d", product);
	return 0 ;
}