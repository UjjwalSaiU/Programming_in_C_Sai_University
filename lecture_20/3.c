#include<stdio.h>
int main(){
    char s[20];
    printf("Enter a string : ");
    scanf("%s",s); //  string we dont have to put &
    int i = 0;
    char t;
    int count = 0;
    printf("enter a charactor you want to check the occurence ");
    scanf(" %c",&t);
    while(s[i]!='\0'){
        if (t==s[i]){
            count++;
        }
        i++;
    }
    printf("%c has occured %d times is %s",t,count,s);
    return 0;
}