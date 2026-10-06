#include <stdio.h>
int main()
{
    int a;
    int sum = 0;
    printf("Enter an integer : ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            printf("%d is the divisor of %d \n", i, a);
            sum = sum + i;
        }
    }
    printf("the sum of divisors of %d is %d ", a, sum);
    return 0;
}