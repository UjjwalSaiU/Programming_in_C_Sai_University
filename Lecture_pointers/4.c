#include<stdio.h>
int main(){
    int a = 6;
    int* p  = &a;
    printf("the address of %d is %p\n",a,p);
    printf("the value %p has stored is %d",p,*p);

    return 0;
}