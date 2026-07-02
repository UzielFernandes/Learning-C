/*Project: Number Number on the Wall

Program Generates a random range of numbers between 15 and 50, user and computer play back and forth
Either User or Computer goes first and selects a number, except the last 5 numbers of the range
Next the player chooses a number within the range but after the number selected by the previous player
The goal of the game is to not be the one to end up typing the last number of that range*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int userfirst(int randomrange,int min,int max) {
    int choiceno = 0; int comp_choice; int newmax; int newmin; int attempts = 0;

    while(choiceno != randomrange || choiceno < randomrange) {

        scanf("%d", &choiceno);
        printf("%d", randomrange);

        if(attempts == 0) { //first attempt
            if(choiceno == randomrange-1 || choiceno == randomrange-2 || choiceno == randomrange - 3 || choiceno <= comp_choice) { //first attempt
                printf("invalid \n");
        }

            else if(choiceno == randomrange || choiceno > randomrange) {
            printf("YOU LOSE!");
            break;
            }
        
            else{ //add 1st play choice
            comp_choice = rand() % (randomrange - choiceno - 1) + (choiceno+1);
            printf("the computer chose %d\n", comp_choice);
            attempts++;
        }}

        else if(choiceno <= comp_choice) { //not first attempt
                printf("invalid");
        }

        else if(choiceno == randomrange) {
        printf("YOU LOSE!");
        break;
        }

        else if(comp_choice >= randomrange) {
        printf("YOU WIN!");
        break;
        }

        else{ 
            comp_choice = rand() % (randomrange - choiceno - 1) + (choiceno+1);
            printf("the computer chose %d\n", comp_choice);
            attempts++;

            if(comp_choice+1 == randomrange) {
                printf("YOU WIN!");
                break;
            }
        }
    }

}
int main() {
    srand(time(0));
    int min = 15;
    int max = 50;

    int randomrange = rand() % (max-min+1) + min;

    for(int i = 1; i != randomrange; i++) {
        printf("%d, ", i);
    }

    printf("\n");

    userfirst(randomrange, min, max);
}
