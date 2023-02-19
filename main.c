#include <stdio.h>
#include <stdlib.h>

double circleArea(double radius)
{
    double area = 3.14 * radius * radius;
    return area;
}

double circleCircum(double radius)
{
    double circum = 2 * 3.14 * radius;
    return circum;
}

void displayCircle(double radius, double area, double circum)
{
    printf("Circle with radius %.2lf:\n", radius);
    printf("Area = %.2lf\n", area);
    printf("Circumference = %.2lf\n", circum);
}

double triangleArea(double base, double height)
{
    double area = 0.5 * base * height;
    return area;
}

void displayTriangle(double base, double height, double area)
{
    printf("Triangle with base %.2lf and height %.2lf:\n", base, height);
    printf("Area = %.2lf\n", area);
}

double squareArea(double side)
{
    double area = side * side;
    return area;
}

double squarePerimeter(double side)
{
    double perimeter = 4 * side;
    return perimeter;
}

void displaySquare(double side, double area, double perimeter)
{
    printf("Square with side length %.2lf:\n", side);
    printf("Area = %.2lf\n", area);
    printf("Perimeter = %.2lf\n", perimeter);
}

int main()
{
    int selection;
    double radius, base, height, side, area, circum, perimeter;

    do {
        printf("Select an option from the following list:\n");
        printf("1. Circle\n2. Triangle\n3. Square\n4. Exit\n");
        scanf("%d", &selection);

        switch (selection) {
            case 1:
                printf("Enter the radius of the circle: ");
                scanf("%lf", &radius);
                area = circleArea(radius);
                circum = circleCircum(radius);
                displayCircle(radius, area, circum);
                break;
            case 2:
                printf("Enter the base of the triangle: ");
                scanf("%lf", &base);
                printf("Enter the height of the triangle: ");
                scanf("%lf", &height);
                area = triangleArea(base, height);
                displayTriangle(base, height, area);
                break;
            case 3:
                printf("Enter the side length of the square: ");
                scanf("%lf", &side);
                area = squareArea(side);
                perimeter = squarePerimeter(side);
                displaySquare(side, area, perimeter);
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid option. Please try again.\n");
                break;
        }
    } while (selection != 4);

    return 0;
}
