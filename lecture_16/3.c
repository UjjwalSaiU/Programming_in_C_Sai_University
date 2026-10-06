#include<stdio.h>
int main(){
    int a[3][2] = {{12,3},{34,5},{67,5}};
    int b[3][2]  = {{5,3},{9,8},{2,50}};
    int c[3][2];
    for (int i =0;i<3 ; i++){
        for (int j = 0 ; j < 2 ; j++){
            c[i][j] = a[i][j] + b[i][j];
        } 
    }
    for (int i =0;i<3 ; i++){
        for (int j = 0 ; j < 2 ; j++){
            printf("%d\t",c[i][j]);
        } 
        printf("\n");
    }
    return 0;
}