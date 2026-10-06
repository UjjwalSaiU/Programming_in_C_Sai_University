// if else condition
#include<stdio.h>
int main(){
    int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    if (a%3==0){
        printf("Number is divisible by 3");
    }
    else{
        printf("Not divisible by 3");
    }

    return 0;
}