#include<stdio.h>
int add(int a, int b){
    int c = a+b;
    return c;
}
float add_f(float a , float b){
    float d= a+b;
    return d;
}

int main(){
    int result,res1,res3;
    float b;
    result = add(4,5);
    res1 = add(67,8);
    res3 = add(9,89);
    b = add_f(3.4,6.8);
    printf("%d %d %d  =\n ",result,res1,res3);
    printf("Integer sum is %d and float sum is %.2f",result,b);
    return 0;
}