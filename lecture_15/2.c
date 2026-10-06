#include<stdio.h>
int main(){
    char name[20];
    printf("size of name is %d",sizeof(name));
    printf("Enter your name ");
    fgets(name,sizeof(name),stdin);
    printf("your name is %s",name);
    return 0;
}