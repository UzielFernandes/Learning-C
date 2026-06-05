#include <stdio.h> 

int main() {
    char colour[20]; //declaring a variable with no value attached

    printf("\nwhat colour is your bujatti? "); //demo question
    /*scanf("%19s", &colour); /*format specifier in quotes and the name of the variable we declared
                            & is not necessary for arrays like this example but very important for other formats */

    fgets(colour, 19, stdin); //for arrays with whitespaces
    printf("oh so your bugatti is %s?", colour); //working as normal!
}