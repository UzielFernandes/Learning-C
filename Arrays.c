#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5}; //to initialize an array (use [])
    printf("1st char at array: %d\n", numbers[0]); //to print element at 0th index
    printf("2nd char at array: %d\n", numbers[1]);
    
    int morenumbers[3]; //creating the array
    morenumbers[0] = 0; //assigning that value at that position
    morenumbers[1] = 10;
    morenumbers[2] = 20;

    printf("Array contents of morenumbers: ");
    for(int i = 3; i != 0, i--;) { //for loop to print all contents of array
        printf("%d\n", morenumbers[i]);
    }
    
    //sizeof(variable) displays the memory occupied by the variable in bytes, an element occupies 
    //8 bytes, so n an array would have the size of n * 8 bytes. 

    printf("Array contents of numbers: ");
    for(int j = sizeof(numbers)/sizeof(numbers[0]); j != 0, j--;){ //print elements of array even if it is edited
        printf("%d\n", numbers[j]);
    }

    return 0;
}
