#include<stdio.h>
int main(){
    char name[] = "Nagarjuna";
    // char reverse[10];
    int i=0;
    while(name[i]!='\0'){
        printf("%c",name[i]);
        i++;
    }
    printf("total numbers of charactors are :%d\n",i);
    int j=i-1; // 9
    int k = 0;
    while(name[k]!='\0'){
        printf("%c",name[j]);
        j--;
        k++;
    }
    return 0;
}