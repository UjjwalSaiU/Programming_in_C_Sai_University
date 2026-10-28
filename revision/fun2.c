
#include <stdio.h>

void uppercase_1(char s[], char t[], int num) {
    int i = 0;

    while (s[i] != '\0' && i < num) {
        if (s[i] >= 'a' && s[i] <= 'z')
            t[i] = s[i] - 32;
        else
            t[i] = s[i];

        i++;
    }

    t[i] = '\0';
}

int main() {
    char s[] = "helloworld";
    char t[100];

    uppercase_1(s, t, 4);

    printf("String is %s\n", t);

    return 0;
}
