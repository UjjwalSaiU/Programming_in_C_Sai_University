#include<stdio.h>
void swap(int* x , int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a = 58;
    int b = 87;
    printf("the value of a and b before swapping are :%d  and %d\n",a,b);
    swap(&a,&b);
    printf("the value of a and b after swapping are :%d  and %d",a,b);

    return 0;
}