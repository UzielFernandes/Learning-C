//Program to test conditionls and switch statements

#include <stdio.h>

int main() { 
    int age;
    char grade;

    printf("What's your age sir?: ");
    scanf("%d", &age);

    if (age >= 18){  //if age is 18 or greater
        printf("%d!, you are eligible for a driving license! \n", age);
    }

    else if (age <= 0){ //invalid age
        printf("uhhh....what? \n");
    }

    else { //age between 1 and 18
        printf("golly, you are not yet eligible for driving license, wait for %d more years \n", 18-age);
    } 
    
   //using switches!

    printf("enter the grade you obtained: ");
    scanf(" %c", &grade);

    switch(grade){
        case 'A':
            printf("PERFECT!!!! \n");
            break;

        case 'B':
            printf("Solid Performance! \n");
            break;

        case 'C':
            printf("Not Bad Tho \n");
            break;

        case 'F':
            printf("Could've been so much better \n");
            break;

        default:
            printf("This is F grade Behaviour!");
    }

    return 0;
}