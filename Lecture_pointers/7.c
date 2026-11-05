#include<stdio.h>
void swap(int* x , int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void swap_without_pointer(int a ,int b){
    int temp = a;  // functions create there own copy of objects or variables
    a = b;
    b = temp;
    printf("th value of a and b inside the function is : %d  and %d\n",a,b);
}
int main(){
    int a = 58;
    int b = 87;
    printf("the value of a and b before swapping are :%d  and %d\n",a,b);
    // swap_without_pointer(a,b); // call by value
    swap(&a,&b);
    printf("the value of a and b after swapping are :%d  and %d",a,b);
  
    return 0;
}