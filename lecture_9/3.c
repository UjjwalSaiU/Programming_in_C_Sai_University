#include<stdio.h>
int main(){
    short num;
    printf("Enter an integer :");
    scanf("%hd",&num);
    if (num%3==0){
        printf("number is divisible by 3\n");

    }
    if (num%5==0){
        printf("number is divisible by 5\n");

    }
    if (num%7==0){
        printf("number is divisible by 7\n");
    }
    else{
        printf("not divisible by 3,5 and 7\n");
    }
    return 0;
}