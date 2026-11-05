#include<stdio.h>
void print_string(char* s){
    int i=0;
    printf("the string is %s\n",s);
    while(*(s+i)!='\0'){
        if(*(s+i)>=97 && *(s+i)<=122){
            *(s+i) = *(s+i) -32;
        }
        i++;
    }
   // printf("the string after change :%s",s);
}
int main(){
    char s[] = "abcdexyz";
    print_string(s);
    printf("after changing :%s",s);
    return 0;
}