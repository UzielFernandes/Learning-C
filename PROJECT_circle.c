//PROJECT: area and circumference of circle

#include <stdio.h>

int main() {
    const float pi = 3.14159;
    float radius;
    float circumference;
    float area;

    printf("what is the radius of your circle? ");
    scanf("%f", &radius);

    circumference = radius * 2 * pi;
    area = pi * radius * radius;

    printf("area of your circle: %.2f \n", area);
    printf("circumference of your cicle: %.2f", circumference);

    return 0;
}