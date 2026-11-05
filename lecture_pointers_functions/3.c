
#include <stdio.h>
#include <string.h>

struct student_details
{
    int age;
    char name[20];
    float height;
};

int main()
{
    struct student_details s[5];

    for (int i = 0; i < 5; i++)
    {

        // s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("Enter your age: ");
        scanf("%d", &s[i].age);
        printf("\nHey, student %d, please enter your name: ", i + 1);
        getchar();

        fgets(s[i].name, sizeof(s[i].name), stdin);
        printf("Enter your height: ");
        scanf("%f", &s[i].height);

        getchar();
    }

    printf("\nStudents details are as follows:\n");

    for (int j = 0; j < 5; j++)
    {
        printf("\nName: %s", s[j].name);
        printf("\nAge: %d", s[j].age);
        printf("\nHeight: %.2f\n", s[j].height);
    }

    return 0;
}
