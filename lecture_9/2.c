#include<stdio.h>
int main(){
    short a;
    printf("Enter an integer number ");
    scanf("%hd",&a);
    if (a%3==0){
        printf("NUmber is divisible by 3");
    }
    else if (a%5==0){
        printf("number is divisible by 5");
    }
    else if (a%7==0){
        printf("number is divisible by 7");
    }
    else{
        printf("not divisible by 3,5 and 7");
    }
    return 0;
}