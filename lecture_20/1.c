//palindrome
#include<stdio.h>

int main(){
    char s[20];
    int flag = 0;
    printf("Enter a string ");
    scanf("%s",s);
    int len = 0;
    int i = 0;
    while(s[i]!='\0'){
        len++;
        i++;
    }
    printf("length of the string %s is %d ",s,len);
    int k = 0;
    int j = len-1;
    while (k<j){
        if (s[k]!=s[j]){
            flag = 1;
            break;
        }
    
        k++;
        j--;
    }
    if (flag==1){
        printf("not palindrome");

    }
    else{
        printf("is palindrome");
    }
    return 0;
}