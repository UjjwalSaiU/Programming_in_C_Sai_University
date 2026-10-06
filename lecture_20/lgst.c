#include<stdio.h>
#include<string.h>
int main(){
    char s[20];
    printf("enter a string ");
    fgets(s,20,stdin);
    int i = 0;
    int count = 0;
    int max=count;
    int k=0,l=strlen(s);
    char word[20];
    int j=0;
    while(s[i]!='\0'){
        if (s[i]!=' '){
            word[j] = s[i];
            j++;
        }
        else{
            if (j>)
        }
        i++;
        count++;
    }
    printf("max is  %d \n",max);
   
    return 0;
}