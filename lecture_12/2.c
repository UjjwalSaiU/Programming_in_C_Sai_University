#include<stdio.h>
int main(){
    for (int i = 7 ; i>0 ;i--){
        for (int k =0 ; k<i ; k++){
            printf(" ");
        }
        for (int j = 6 ; j>=i ;j-- ){
            printf("%d ",j);
        
        }
        printf("\n");
    }
    return 0;
}