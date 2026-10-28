#include<stdio.h>
// swapping using pointers 
int main(){
    int a = 5;
    int b = 7;
    int* aptr;
    int* bptr;
    aptr = &a;
    bptr = &b;
    printf("the size of aptr %d\n",sizeof(aptr));
    printf("Before swapping \n");
    printf("The value of a and b are : %d and %d\n",a,b);
    int temp = *aptr;
    *aptr = *bptr ;
    *bptr = temp;
     printf("After swapping \n");
    printf("The value of a and b are : %d and %d\n",a,b);
    return 0;
}