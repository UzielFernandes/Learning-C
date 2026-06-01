//Variables in C

#include <stdio.h> 
#include <stdbool.h> //exclusive library needed for boolean

int main() { 
    int a = 6; // data type for numbers
    printf("Hello World! %d \n", a); // %d is formal specifier for int

    char b = 'c'; //dt for characters
    printf("Hello World %c \n", b); // %c is fs

    char c[] = "Good Morning!"; //dt for statement/s via arrays
    printf("Hello World, %s \n", c); // %s is fs

    float d = 6.5; //dt for float/decimal values
    printf("Hello World %f \n", d); // %f is fs, be default shows 6 values after decimal point
    printf("Hello World %.2f \n", d); // any number before f specifies no of digits after decimal point
    printf("Hello World %.10lf \n", d); // for more digits, %lf is fs

    bool e = true; //dt for boolean
    printf("Hello World %d \n", e); // %d again is the fs

    return 0; 
}