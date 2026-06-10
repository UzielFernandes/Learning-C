#include <stdio.h>

int main() {
    int array[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
        }; //A Two Dimensional Array!

    /* int newarray[2][2];
    int newarray[0][0] = 1;
    int newarray[0][1] = 2;
    int newarray[1][0] = 3;
    int newarray[1][1] = 4; //initializing a 2d array */

    for(int i = 0; i < 3; i++) { //to diplay 2d array in grid form //rows
        for(int j = 0; j < 3; j++) { //columns
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    /*we can make it less fragile by calculating rows and columns:
    rows = sizeof(numbers)/ sizeof(numbers[0]); //as calculating no of elements
    columns = sizeof(numbers[0])/sizeof(numbers[0][0]) */

}

