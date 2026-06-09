#include <stdio.h>
#include <string.h> //Library for string function

int main() {
    char stringa[] = "Uzi";
    char stringb[] = "Fern";

    strlwr(stringa); //lowercase //op: uzi
    strupr(stringb); //uppercase //op: FERN
    strcat(stringa, stringb); //concatenate both strings //op: UziFern
    strncat(stringa, stringb, 2); //concatenate x char of both strings //op: UziFe
    strcpy(stringa,stringb); //replace string a with string b //op: Fern
    strncpy(stringa,stringb,2); //replace string a with x number of string b char //op: Fei

    strset(stringa, '!'); //replace characters of string a with ! //op: !!!
    strnset(stringa, '!', 1); //replace c characters of stringa with ! //op: !zi
    strrev(stringa); //reverse string //op: izU

    int x = strlen(stringa); //returns lenght of string //op: 3
    int y = strcmp(stringa, stringb); //compares characters of both variables, returns 0 if same characters, 
                                      //need seperate conditionals to compare
    int z = strncmp(stringa, stringb, 1); //compares x characters of both variables, returns 0 if same characters, 
                                          //need seperate conditionals to compare



}                                        
