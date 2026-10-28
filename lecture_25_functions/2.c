#include<stdio.h>
void length_of_string(char s[]){
    int i  = 0;
    while(s[i]!='\0'){
        i++;

    }
    printf("length of the string %s is %d\n",s,i);
}

int main(){
    char t[] = "abcdefg";
    char r[] = "hijklm";
    char y[]  = "zyx";
    length_of_string(t);
    length_of_string(r);
    length_of_string(y);
    return 0;
}