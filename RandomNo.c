#include <stdio.h>
#include <stdlib.h> //for rand and srand
#include <time.h> //for current time

int main() {
    srand(time(0)); //seed
    /*seed: computers generate a sequence depending on the starting number,
    so unfortunately nothing is built-in random
    but if we constantly change the starting number somehow, the sequence also keeps changing
    
    time(0) gives the current time, so since each second changes, starting no changes, sequence changes,
    new numbers form, looks random to us*/

    int num1 = (rand() % 7); // 
    int num2 = (rand() % 6) + 1;
    printf("%d\n%d", num1, num2);
}