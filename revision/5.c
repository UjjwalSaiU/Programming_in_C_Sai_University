#include<stdio.h>
int main(){
    int a ,b;
    printf("enter a number ");
    scanf("%d %d",&a,&b);
    if (a%3 == 0 & b%5==0){
        printf("a and b is divisible by 3 and 5 respectively");
    }
    else{
        printf("only one of them is divisible by 3 or 5 or not by both");
    }
    return 0;
}