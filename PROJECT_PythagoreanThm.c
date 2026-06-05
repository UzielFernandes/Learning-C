//PROJECT: Pythogoras theorem: a^2 + b^2 = c^2

#include <stdio.h>
#include <math.h>

int main() {
    float side_one;
    float side_two;
    float hypo;

    printf("enter the lenght of the first side: ");
    scanf("%f", &side_one);
    
    printf("enter the side of the second side: ");
    scanf("%f", &side_two);

    hypo = sqrt(pow(side_one, 2) + pow(side_two, 2));
    printf("the lenght of your hypotenuse is: %.2f", hypo);

    return 0;
}

//btw purely self made!!!