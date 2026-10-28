#include<stdio.h>
int main(){
    float b = 3.145;
    float* ptr = &b;
    printf("the address of %f is %p",b,ptr);
    return 0;
}