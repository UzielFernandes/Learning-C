//PROJECT: Temperature Convertor

#include <stdio.h>
#include <ctype.h> //for string functions

int main(){
    char t;
    float value;

    printf("is your temperature currently in farrenheit (F) or celcius (C): \n");
    scanf("%c", &t);

    t = toupper(t); //captializeing c or f automatically

    if(t == 'F'){
        printf("\nwhats the temperature in farenheit: ");
        scanf("%f", &value);
        value = (value * 9 / 5) + 32;

        printf("\nThe temperature in celcius, then, is: %.1f", value);

    }

    else if(t == 'C'){
        printf("\nwhats the temperature in celcius: ");
        scanf("%f", &value);
        value = ((value - 32) * 5) / 9;

        printf("\nThe temperature in farenheit, then, is: %.1f", value);
    }

    else {
        printf("huh? \n");
    }

    return 0;
}