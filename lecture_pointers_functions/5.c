#include<stdio.h>
int main(){
    int arr[2][3] = {1,2,4,5,5,4};
    int (*ptr)[3] =arr; 
    printf("%d %d",ptr[0][1],ptr[0][2]);
    return 0;
}