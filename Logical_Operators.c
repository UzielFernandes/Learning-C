//Logical Operators: AND OR NOT

#include <stdio.h>
#include <stdbool.h>

int main(){
    int temp = 250;
    bool sunny = true;

    /*if (temp > 0 && temp < 30 && sunny) { //&& is for AND
        printf("It is a nice weather we got there!");
    } */

    /*if (temp > 0 && temp < 30 || sunny) { //|| is for OR
        printf("It is a nice weather we got there!");
    } 
    
    else {
        printf("Weather couldve been better no");
    }*/

    if (!sunny == 1){ //! is for NOT
        printf("NO SUN = NO NICE WEATEHER!");
    } 
    
    else {
        printf("Nice Sun man");
    }

    return 0;    
}