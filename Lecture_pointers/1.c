#include<stdio.h>
int main(){
    int a = 5;
    int* ptr = &a;// ptr is storing the address of a that is &a;
    printf("the address of %d is %p \n",a,&a);
    printf("the value of %d is %p",a,ptr);

    return 0;
}