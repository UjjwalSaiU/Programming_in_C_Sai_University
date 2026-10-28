#include <stdio.h>
void double_number(int *x) //  call by refernce
{
    *x = *x * 2;
    // x is refernce point
}
void double_without_pointer(int t){  // call by value 
    t = t*2; // t is  new variable 
}
int main()
{
    int a = 10;
    printf("the value of a is %d\n", a);
    double_number(&a);
    printf("the value of a is %d\n", a);
    printf("without using pointer \n");
    printf("the value of a is %d\n",a);
    double_without_pointer(a);
    printf("the value of a is %d",a);

}