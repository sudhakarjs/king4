#include <stdio.h>
 
int main()
{
  int a, n, fact = 1;
 
  printf("Enter a number to calculate its factorial\n");
  scanf("%d", &n);
 
  for (a = 1; a <= n; a++)
    fact = fact * a;
 
  printf("Factorial of %d = %d\n", n, fact);
 
  return 0;
}
