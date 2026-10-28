#include<stdio.h>
int main(){
    char n[20];
    int i=0;
    printf("enter name :");
    fgets(n,20,stdin);
    while(n[i]!='\n'){
        i++;
    }
    int j=i-1;
    while(j>=0){
        printf("%c",n[j]);
        j--;
    }
    return 0;
}