#include<stdio.h>
int length_of_string(char s[]){
    int i  = 0;
    while(s[i]!='\0'){
        i++;

    }
    // printf("length of the string %s is %d\n",s,i);
    return i;
}

int main(){
    char t[] = "abcdefg";
    char r[] = "hijklm";
    char y[]  = "zyx";
    printf("length  of the string %s is %d",t,length_of_string(t));
    printf("length of the string %s is %d",r,length_of_string(r));
    printf("length of the string %s is %d",y,length_of_string(y));

    return 0;
}