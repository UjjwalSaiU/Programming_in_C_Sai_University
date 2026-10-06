#include<stdio.h>
int main(){
    char c[20];
    fgets(c,20,stdin);
    printf("%s",c);
    
    return 0;
}