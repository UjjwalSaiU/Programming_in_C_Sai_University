#include <stdio.h>

int main(void) {
    int x = 10;
    int *ptr = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %p\n", (void *)&x);
    printf("Address stored in ptr: %p\n", (void *)ptr);
    printf("Value pointed to by ptr: %p\n", ptr);

    return 0;
}