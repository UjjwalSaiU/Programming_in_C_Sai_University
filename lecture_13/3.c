#include<stdio.h>
int main(){
    int i = 1;
    float sum =0;
    int n;
    printf("enter an integer :");
    scanf("%d",&n);
    while(i<=n){
        // sum = sum +i;
        sum+=i;
        i++;
    }
    printf("\n Sum of first %d natural numbers is %.2f\n",n,sum);
    printf("Average is %.2f",sum/n);
    return 0;
}