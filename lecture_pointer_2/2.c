#include<stdio.h>
int main(){
    char s[] ="abcde";
    printf("the value of index 0 is %c\n",*s);
    printf("the value of index 1 is %c\n",*(s+1));
    printf("the value of index 2 is %c\n",*(s+2));
    printf("the value of index 3 is %c\n",*(s+3));

    return 0;
}