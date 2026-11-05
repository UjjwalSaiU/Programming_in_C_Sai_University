#include<stdio.h>
void array_change(int* ptr){
*(ptr+1) = 50;
}
int main(){
    int arr[5] = {1,3,4,5,6};
    printf("value of index 0 before change_array %d\n",*(arr+1));
    array_change(arr);
    printf("value of index 0 after change_array %d\n",*(arr+1));

    return 0;
}