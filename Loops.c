#include <stdio.h>

int main() {

    //FOR LOOP!

    for (int i = 1; i<=10; i++) { //format: initializing index, condition how long itll run, index updater

        if (i == 5) {
            continue;
        }
        else if (i == 7) {
            break;
        }

        printf("%d\n", i);
    } 

    //WHILE LOOP!

    /* int number = 0;
    printf("I'm not a creep sarrr, give me your phone number sarrr\n");
    scanf("%d", &number);

    while(number == 0) { //format: simply the condition
        printf("Why like this sarrr, give number no sarrr\n"); 
        scanf("%d", &number);
    }

    printf("Thanks Sarr!"); */
    
    //DO WHILE LOOP!

    int number = 0;
    int sum = 0;

    do{
        printf("type a number to sum, 0 to end\n");
        scanf("%d", &number);
        sum+=number;
    }while(number != 0);

    printf("%d is the sum", sum);
}