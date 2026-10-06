#include<stdio.h>
int main(){
    char s[20];
    char r;
    printf("Enter a string ");
    scanf("%s",s);
    printf("enter an charactor");
    scanf(" %c",&r);
    int i = 0;
    while(s[i]!='\0'){
        if (r == s[i]){
            printf("%c has occured at %d\n",r,i);
        }
        i++;
    }

    return 0;
}