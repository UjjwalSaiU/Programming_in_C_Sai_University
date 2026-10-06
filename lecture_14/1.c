// while loop
#include<stdio.h>
int main(){
    int i;
    int sum =-100;
    while(sum<0){
     
        printf("enter an integer number ");
        scanf("%d",&i);
        sum = sum +i;
    }
    printf("\nloop finished ");
    printf("sum of all the numbers is %d",sum);
    return 0;
}