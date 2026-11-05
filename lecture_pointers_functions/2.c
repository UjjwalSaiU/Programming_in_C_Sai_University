#include<stdio.h>
void divide_by_two(int* arr,int n){
for (int i = 0;i<n;i++){
    *(arr+i) = *(arr+i)/2;
}
}
int main(){
    int arr[] = {10,20,30,40,60};
    printf("before change\n");
    for (int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    divide_by_two(arr,5);// 
    printf("after change\n");
    for (int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}