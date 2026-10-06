#include <stdio.h>

int main() {
    char word[20];
    char val;
    int first, last;
    printf("Enter the letter you want to find: ");
    scanf("%c", &val);
    int i = 0;
    while(first == ""){
        if(word[i] == val){
            first = i;
            last = i;
        }
        i++;
    }
    for(int j = i; j<20; j++){
        if(word[i] == val){
            last = i;
        }
    }

    if(first == "" && last ==""){
        printf("The letter is not in the word");
    } else {
            
    }

}