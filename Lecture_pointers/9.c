#include<stdio.h>
void half_the_number(float* f){
    *f = *f/2;
}
int main(){
    float  pi = 3.14;
    float* pptr = &pi;
    printf("the value of pi is %.2f\n",*pptr);
    half_the_number(pptr); // (&pi)
    printf("after half \n");
    printf("the value of pi is %.2f\n",*pptr);
    

    return 0;
}