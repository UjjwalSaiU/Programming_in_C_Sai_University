#include<stdio.h>
void greet(char name[]){
    printf(" hello! %s\n",name);
}
int main(){
    char str[] = "abcde";
    greet(str);
    // printf("\nmy name is abcde");
    greet("xyz");
    greet("ijkl");
    return 0;
}