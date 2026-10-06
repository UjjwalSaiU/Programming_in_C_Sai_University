#include<stdio.h>
void add_add(int a , float b){
    printf("float value is %.2f\n",b);
    printf("integer value is %d \n",a);
    return;

}
int main(){
    add_add(6,9.65);

    return 0;
}