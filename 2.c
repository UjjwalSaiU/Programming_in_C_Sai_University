#include<stdio.h>
int main(){
    int a ;
    float b;
    int c;
    char k;
    printf("Enter an integer number ");
    scanf("%d",&a);
    printf("Enter a number ");
    scanf("%f",&b);
    printf("Value of a  is %d \n",a);
    printf("Number is a %.2f \n",b);
    printf("Enter a character: ");
    scanf(" %c", &k);
    printf("Value of a is %c \n",k);


    return 0;
}