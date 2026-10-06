// code by Manipavan
#include<stdio.h>
int main(){
    int a;
    printf("enter the number : ");
    scanf("%d",&a);
    if(a%3==0 || a%5==0){
        printf("the number is either divisible by 3 or 5");

    }
    else{
        printf("the number is neither divisible by 3 or 5");
    }
    return 0;
}