#include <stdio.h>
int main()
{
    int x, y, a, p;
    printf("The length of the rectangle is =");
    scanf("%d", &x);
    printf("The breadth of the rectangle is =");
    scanf("%d", &y);
    a = x * y;
    p = 2 * x + 2 * y;
    if (a > p)
    {
        printf("The area of the rectangle is greater than its perimeter");
    }
    if (p > a)
    {
        printf("The perimeter of the rectangle is greater than its area");
    }
    if (a == p)
    {
        printf("The area is equal to perimeter if the rectangle");
    }
    return 0;
}