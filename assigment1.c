#include <stdio.h>

int main() {
    float pi = 3.14;
    float radius, circumference, area;

    printf("Enter the value of radius: ");
    scanf("%f", &radius);

    circumference = 2 * pi * radius;
    area = pi * radius * radius;

    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    return 0;
}

