/*Project: Number Number on the Wall

Program Generates a random range of numbers between 15 and 50, user and computer play back and forth
Either User or Computer goes first and selects a number, except the last 5 numbers of the range
Next the player chooses a number within the range but after the number selected by the previous player
The goal of the game is to not be the one to end up typing the last number of that range*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int userfirst(int randomrange,int min,int max) {
    int choiceno = 0; int comp_choice; int attempts = 0;

    printf("Alright then you go first!, enter your number: ");

    while(choiceno != randomrange || choiceno < randomrange) {

        scanf("%d", &choiceno);

        if(attempts == 0) { //first attempt
            if(choiceno == randomrange-1 || choiceno == randomrange-2 || choiceno == randomrange - 3 || choiceno <= comp_choice) { //first attempt
                printf("Give yourself a challenge mate: \n");
        }

            else if(choiceno == randomrange-1 || choiceno > randomrange) {
            printf("YOU LOSE! Tough luck man!");
            break;
            }
        
            else{ //add 1st play choice
            comp_choice = rand() % (randomrange - choiceno - 1) + (choiceno+1);
            printf("the computer chose %d\n", comp_choice);
            attempts++;
        }}

        else if(choiceno <= comp_choice) { //not first attempt
                printf("Hey Hey no running!!!: ");
        }

        else if(choiceno == randomrange-1 || choiceno > randomrange) {
        printf("YOU LOSE! Tough Luck Man!");
        break;
        }

        else if(comp_choice+1 >= randomrange) {
        printf("YOU WIN!!!! YOU LUCKKYY BOIII!!!!");
        break;
        }

        else{ 
            comp_choice = rand() % (randomrange - choiceno - 1) + (choiceno+1);
            printf("the computer chose %d\n", comp_choice);
            attempts++;

            if(comp_choice+1 == randomrange) {
                printf("YOU WIN!!!! YOU LUCKKYY BOIII!!!!");
                break;
            }
        }
    }
}

int compfirst(int randomrange,int min,int max) {
    int choiceno = 0; int comp_choice; int attempts = 0;

    printf("Alright then! the computer starts: ");
    comp_choice = rand() % (randomrange - choiceno - 1) + (choiceno+1);
            printf("the computer chose %d\n", comp_choice);

    while(choiceno != randomrange || choiceno < randomrange) {

        scanf("%d", &choiceno);

        if(attempts == 0) { //first attempt
            if(choiceno == randomrange-1 || choiceno <= comp_choice) { //first attempt
                printf("C'mon don't make the game boring like that:  \n");
        }

            else if(choiceno == randomrange-1 || choiceno > randomrange) {
            printf("YOU LOSE! Tough Luck Man");
            break;
            }
        
            else{ //add 1st play choice
            comp_choice = rand() % (randomrange - choiceno - 1) + (choiceno+1);
            printf("the computer chose %d\n", comp_choice);
            attempts++;
        }}

        else if(choiceno <= comp_choice) { //not first attempt
                printf("Hey Hey no running away!: ");
        }

        else if(choiceno == randomrange-1 || choiceno > randomrange) {
        printf("YOU LOSE! Tough Luck Man!");
        break;
        }

        else if(comp_choice+1 >= randomrange) {
        printf("YOU WIN!!!! YOU LUCKKYY BOIII!!!!");
        break;
        }

        else{ 
            comp_choice = rand() % (randomrange - choiceno - 1) + (choiceno+1);
            printf("the computer chose %d\n", comp_choice);
            attempts++;

            if(comp_choice+1 == randomrange) {
                printf("YOU WIN!!!! YOU LUCKKYY BOIII!!!!");
                break;
            }
        }
    }
}


int main() {
    srand(time(0));
    int min = 15; int max = 50; int choice;

    int randomrange = rand() % (max-min+1) + min;

    printf("****WELCOME TO NUMBER NUMBER ON THE WALL!!****\n");
    printf("Without further ado, here is your range: \n");
    for(int i = 1; i != randomrange; i++) {
        printf("%d, ", i);
    }

    printf("\n");

    printf("Do you want to go First or do you want the computer to go first? 1 for you, 2 for computer: ");
    scanf("%d", &choice);

    while(choice != 1 && choice != 2) {
        printf("c'mon man put a valid no: ");
        scanf("%d", &choice);
    }

    if(choice == 1) {
        userfirst(randomrange, min, max);
    }

    else if(choice == 2) {
        compfirst(randomrange, min, max);
    }


}
