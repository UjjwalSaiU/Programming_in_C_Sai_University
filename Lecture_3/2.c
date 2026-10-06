#include<stdio.h>
int main(){
    int a;
    int b;
    printf("Enter 1st integer : ");
    scanf("%d",&a); // format specifier 
    printf("Enter 2nd integer : ");
    scanf("%d",&b);
    int c;
    c = a%b; // 
    printf("The value of c is : %d",c);
    return 0;
}