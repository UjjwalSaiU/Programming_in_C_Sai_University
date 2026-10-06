#include<stdio.h>
int main(){

    float a;
    float b;
    float sum ;
    float multiplication;
    float quotient;
    // sum = a+b;
    printf("enter an integer ");
    scanf("%f",&a);
    printf("enter 2nd integer ");
    scanf("%f",&b);
    sum  = a+b;
    multiplication = a*b;
    quotient = a/b;
    printf("the sum is %.2f\n",sum);
    printf("multiplication is %.2f\n",multiplication);
    printf("quotient is %.2f\n",quotient);
    return  0;
}