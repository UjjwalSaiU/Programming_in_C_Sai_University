#include<stdio.h>
int main(){
    int num;
    int count=0;
    int digit;
    int sum = 0;
    int reverse=0;
    printf("Enter an integer : ");
    scanf("%d",&num);
    while(num!=0){
        count++;
        digit = num% 10;
        sum = sum + digit;
        num = num /10;
        reverse=reverse*10+digit;

    }
    printf("number of digits is %d",count);
    printf("sum of all the digits is %d",sum);
    printf("reverse of num :%d",reverse);

    

    return 0;
}