//Code by Athavan
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the Value of A,B AND C  :");
    scanf("%d %d %d",&a,&b,&c);
    // scanf("%d",&a);
    // printf("Enter the Value of B :");
    // scanf("%d",&b);
    // printf("Enter the Value of C :");
    // scanf("%d",&c);
    if(a>b && a>c){
    printf("%d is the Greatest of All",a);
    }
    else if(b>a && b>c){
        printf("%d is the Greatest of All",b);
    }
    else{
        printf("%d is the Greatest of All",c);
    }

    return 0;
}