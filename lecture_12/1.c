#include<stdio.h>
int main(){
    int arr[] = {7,10,3,5,6,7,91,71};
    int max = arr[0];
    for (int i = 1 ; i<8 ; i++){
        if (arr[i] > max){
            max  = arr[i];
        }
       else{
        printf("nothing ");
       }
    }
    printf("maximum number is %d",max);
    return 0;
}