#include <stdio.h>
#include <math.h>
 
void main()
{
    int num, sum = 0, rem = 0, cube = 0, temp;
 
    printf ("enter a num");
    scanf("%d", &num);
    temp = num;
    while (num != 0)
    {
        rem = num % 10;
        cube = pow(rem, 3);
        sum = sum + cube;
        num = num / 10;
    }
    if (sum == temp)
        printf ("The given no is armstrong no");
    else
        printf ("The given no is not a armstrong no");
}
