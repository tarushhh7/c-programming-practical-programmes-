#include <stdio.h>
#define PI 3.1416

int main() {
    float radius, side, length, breadth;
    float area_circle, perimeter_circle;
    float area_square, perimeter_square;
    float area_rectangle, perimeter_rectangle;

    // Circle
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    area_circle = PI * radius * radius;
    perimeter_circle = 2 * PI * radius;
    printf("\nCircle:\nArea = %.2f\nPerimeter = %.2f\n", area_circle, perimeter_circle);

    // Square
    printf("\nEnter side of the square: ");
    scanf("%f", &side);
    area_square = side * side;
    perimeter_square = 4 * side;
    printf("\nSquare:\nArea = %.2f\nPerimeter = %.2f\n", area_square, perimeter_square);

    // Rectangle
    printf("\nEnter length and breadth of the rectangle: ");
    scanf("%f %f", &length, &breadth);
    area_rectangle = length * breadth;
    perimeter_rectangle = 2 * (length + breadth);
    printf("\nRectangle:\nArea = %.2f\nPerimeter = %.2f\n", area_rectangle, perimeter_rectangle);

    return 0;
}