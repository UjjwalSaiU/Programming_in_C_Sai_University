#include<stdio.h>
int main(){
    int n;
    int q;
    int rem;
    printf("enter an integer number : ");
    scanf("%d",&n);
    q = n/10;
    rem = n%10;
    printf("q and r  are : %d and %d :" ,q,rem);
    return 0;
}