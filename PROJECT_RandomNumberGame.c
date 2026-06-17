//THE RANDOM NUMBER GAME!!!!

#include <stdio.h> 
#include <time.h> //seed as time
#include <stdlib.h> //for rand and srand

int main() {
    srand(time(0)); 

    int Min = 1;
    int Max = 100; //range
    int guess; //user input
    int noofguesses = 0; //no of guesses duh

    int randno = (rand() % Max) + Min; //to generate random number
     
    do{ //dowhileloop!!!!
        printf("Enter a random number between %d and %d: ", Min, Max);
        scanf("%d", &guess);
        noofguesses += 1;

        if(randno > guess) {
            printf("You went too low!\n");
        }
        else if (randno < guess) {
            printf("You went too high!\n");
        }
    }while(randno != guess);

    printf("\nCONGO YOU GUESSED THE RIGHT ANSWER IN %d TRIES!", noofguesses);


}