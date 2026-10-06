// if else
#include<stdio.h>
int main(){
    int a;
    printf("enter an number :");
    scanf("%d",&a);
    // syntax if - else
    if (a%2==0){
        if (a%3==0){
            printf("Divisible by 2 and 3");
        }
        else{
            printf("Divisible by 2 but not 3");
        }
    }
    else{
        if(a%3==0){
            printf("Divisible by 3 but not 2");
        }
        else{
            printf("Neither divisible by 2 nor 3");
        }
    }
    return 0;
}