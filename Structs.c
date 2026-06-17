#include <stdio.h>
#include <string.h>

struct attributes{ //structs
    char name[20];
    int age;
};

typedef struct{ //typedef + structs
    char itemcode[20];
    int price;
}iteminfo;

int main() {
    //structs demo
    struct attributes Man1;
    struct attributes Woman1;
    struct attributes Woman2 = {"Liz", 46}; //also works

    strcpy(Man1.name, "John");
    Man1.age = 15;

    strcpy(Woman1.name, "Sarah");
    Woman1.age = 17;

    printf("%d\n", Man1.age);
    printf("%s\n", Woman1.name);
    printf("%s, %d\n", Woman2.name, Woman2.age);

    //typedef + structs demo
    iteminfo item1 = {"abc123", 45};
    iteminfo item2 = {"efg567", 22};
    printf("%s, %d", item1.itemcode, item2.price);
}

