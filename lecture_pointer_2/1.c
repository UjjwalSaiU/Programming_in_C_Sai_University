#include<stdio.h>
int main(){
    int arr[5] = {13,5,3,2,5};
    printf("address of arr is %p\n",arr);
    printf("first index has value : %d\n",*arr); // equivalent to arr[0]
    printf("second index has value : %d\n",*(arr+1));// equi. to arr[1]
    printf("third index has value %d\n",*(arr+2)); //equi. to arr[2]
    // *(arr+i) = arr[i]
    return 0;
}