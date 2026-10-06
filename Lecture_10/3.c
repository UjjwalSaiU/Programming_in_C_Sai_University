// switch case 
#include<stdio.h>
int main(){
    char a;
    printf("enter a charactor : ");
    scanf("%c",&a);
    switch (a){
        case 'a': 
            printf("A grade ");
            break;
        case 'b':
            printf("B grade ");
            break;
        case 'c':
            printf("C grade ");
            break;
        case 'd':
            printf("D grade ");
        default:
            printf("Failed");
            break;
    }
    return 0;
}