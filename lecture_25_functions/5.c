#include<stdio.h>
void change_string(char r[]){
    r[0] = 'H';
    r[2] = 'L';
}
int main(){
    char s[] = "hello_world";
    printf("before change \n");
    printf("%s \n",s);
    change_string(s);
    printf("after change\n");
    printf("%s \n",s);
    return 0;
}