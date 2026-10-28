#include<stdio.h>
int main(){
    int a = 6;
    int b = 7;
    int* bptr = &b;
    int* aptr = &a;
    // bptr = aptr;
    printf("the address of %d is %p\n",b,(void*)bptr);
    printf("the address of %d is %p",a,aptr);
    return 0;
}