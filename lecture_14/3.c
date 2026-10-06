#include<stdio.h>
int main(){
    int n;
    int m;
    int count = 0;
    int rem;
    int sum = 0;
    printf("enter an integer number : ");
    scanf("%d",&n);
    m = n;
    while(n!=0){
        rem = n%10;
        n = n /10;
        sum += rem;// sum = sum + rem;
        count ++;// count = conut+1'

    }
    printf("%d has %d digits and sum of digits are %d",m,count,sum);

    return 0;
}