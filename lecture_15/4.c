#include <stdio.h>
int main()
{
    char s_1[] = "ABcdE";
    printf("old name is %s\n", s_1);
    int i = 0;
    while (s_1[i] != '\0')
    {
        if (s_1[i] >= 65 && s_1[i] <= 97)
        {
            s_1[i] = s_1[i] + 32;
        }
        i++;
    }
    printf("changed name is %s", s_1);
    return 0;
}