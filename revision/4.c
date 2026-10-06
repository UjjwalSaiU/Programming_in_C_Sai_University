#include<stdio.h>
int main(){
    int a;
    int b;
    printf("enter both the numbers ");
    scanf("%d %d",&a,&b);
    if(a<b){
        printf("%d is bigger number ",b);
    }
    else{
        printf("%a is bigger",a);
    }
    return 0;
}