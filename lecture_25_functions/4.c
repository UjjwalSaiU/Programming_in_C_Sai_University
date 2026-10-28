#include<stdio.h>
void change_value(int x , int y){
    x = 10;
    y = 20;
}
int main(){
    int x  = 50;
    int y = 60;
    printf("the value of x and y are : %d and %d\n",x,y);
    change_value(x,y);
    printf("after changing the value\n");
    printf("the value of x and y are : %d and %d\n",x,y);


    return 0;
}