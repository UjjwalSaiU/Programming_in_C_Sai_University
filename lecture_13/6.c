#include <stdio.h>
int main()
{
int n, count = 0;
printf("Enter a number: ");
scanf("%d", &n);
while(n != 0)
{
n = n / 10;
printf("the value of n is %d ",n);
count++;
}
printf("Number of digits = %d", count);
return 0;}
