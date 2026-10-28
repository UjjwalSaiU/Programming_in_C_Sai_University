#include<stdio.h>
int main(){
    int a =5 ;
    int* ptr = &a;
    // dereference 
     printf("the value of a is %d\n",a);

    printf("the value of a is %d \n",*ptr);
    *ptr = 56;
    printf("the value of a is %d\n",*ptr);
    printf("the value of a is %d\n",a);

    return 0;
}