#include <stdio.h>

int main() {

    int number = 10;
    int *ptr = &number;

    printf("Value: %d\n", number);
    printf("Address: %p\n", &number);
    printf("Using Pointer: %d\n", *ptr);

    return 0;
}
