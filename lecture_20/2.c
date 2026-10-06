#include <stdio.h>
int main()
{
    int prime;
    int flag = 0;
    printf("Enter an integer : ");
    scanf("%d", &prime);
    for (int i = 2; i < prime; i++)
    {
        if (prime % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("number is not prime");
    }
    else
    {
        printf("number is prime");
    }
    return 0;
}