#include<stdio.h>
int main(){
    int a = 15;
    if (a%3==0 && a%5==0){
        printf("number is divisible by 3 and 5");
    }
    else{
        printf("Neither divisible by 3 nor 5 ");
    }
    if (a%3==0 || a%5==0){
        printf("divisible by either 3 or 5 ");
    }
    else{
        printf("not divisible by both ");
    }
    return 0;
}