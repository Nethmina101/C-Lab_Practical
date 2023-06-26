#include <stdio.h>

int main() {

    double radius, diameter, circumference, area,PI=3.14159;

    // Read the radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate the diameter, circumference, and area
    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    // Print the results
    printf("Diameter: %.2f\n", diameter);
    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    return 0;
}
