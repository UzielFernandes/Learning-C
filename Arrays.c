#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5}; //to initialize an array (use [])
    printf("1st char at array: %d\n", numbers[0]); //to print element at 0th index
    printf("2nd char at array: %d\n", numbers[1]);
    
    int morenumbers[3]; //creating the array
    morenumbers[0] = 0; //assigning that value at that position
    morenumbers[1] = 10;
    morenumbers[2] = 20;

    for(int i = 4; i != 0, i--) {
        printf("1st position of another array: %d", numbers[i]);
    }
    return 0;
}
