#include <stdio.h>
#include <string.h>

struct attributes{
    char name[20];
    int age;
};

int main() {
    struct attributes Man1;
    struct attributes Woman1;

    strcpy(Man1.name, "John");
    Man1.age = 15;

    strcpy(Woman1.name, "Sarah");
    Woman1.age = 17;

    printf("%d\n", Man1.age);
    printf("%s", Woman1.name);
}