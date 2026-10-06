// while loop
#include<stdio.h>
int main(){
    int sum = 0;
    while(sum<100){
        int n;
       printf("enter a number : ");
       scanf("%d",&n);
       sum = sum+n;
    }
    
    return 0;
}