#include<stdio.h>
int main(){
    int sum=0;
    int a;
    int count=0;
    while(sum<100){
        printf("enter an integer number ");
        scanf("%d",&a);
        sum = sum + a;
        count+=1;
    }
    printf("sum is %d\n" ,sum );
    printf("count value is %d ", count);
    return 0;
}