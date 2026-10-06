#include <stdio.h>
int main()
{
    char a[] = "abcde";
    char b[] = "xyz";
    char c[10];
    int i = 0;
    int j = 0 ;
    while(a[i]!='\0'){
        c[i] = a[i];
        i++;
    }
    while(b[j]!='\0'){
        c[i] = b[j];
        i++;
        j++;
    }
    c[i]='\0';
    printf("merged string is %s",c);
    return 0;
}