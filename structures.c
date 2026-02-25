#include <stdio.h>
// these codes are just for fun haha

struct Student {
    char name[20];
    int age;
};

int main() {

    struct Student s1 = {"Vish", 21};

    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);

    return 0;
}
