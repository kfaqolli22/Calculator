#include <stdio.h>
#include <math.h>
#include<string.h>

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        printf("Error: division by zero\n");
        return 0;
    }
    return a / b;
}

double square_root(double a) {
    if (a < 0) {
        printf("Error: square root of negative number\n");
        return 0;
    }
    return sqrt(a);
}

double power(double a, double b) {
    return pow(a, b);
}
double areaOfSquare(double side) {
    return side * side;
}


double perimeterOfSquare(double side) {
    return 4 * side;
}


double areaOfCircle(double radius) {
    return 3.14 * radius * radius;
}


double perimeterOfCircle(double radius) {
    return 2 * 3.14 * radius;
}

int main() {
    char opera,df;
    double num1, num2, result,side,radius,area,perimeter;
    int choice;
    printf("Enter c to use calculator and a to find the area and perimeter");
    scanf(" %c",&df);

if(df=='c'){
    printf("Enter an operator (+, -, *, /, s, p): ");
    scanf(" %c", &opera);

    if (opera != 's') {
        printf("Enter two numbers: ");
        scanf("%lf %lf", &num1, &num2);
    } else {
        printf("Enter a number: ");
        scanf("%lf", &num1);
    }

    if (opera == '+') {
        result = add(num1, num2);
        printf("%.2lf + %.2lf = %.2lf", num1, num2, result);
    } else if (opera == '-') {
        result = subtract(num1, num2);
        printf("%.2lf - %.2lf = %.2lf", num1, num2, result);
    } else if (opera == '*') {
        result = multiply(num1, num2);
        printf("%.2lf * %.2lf = %.2lf", num1, num2, result);
    } else if (opera == '/') {
        result = divide(num1, num2);
        printf("%.2lf / %.2lf = %.2lf", num1, num2, result);
    } else if (opera == 's') {
        result = square_root(num1);
        printf("sqrt(%.2lf) = %.2lf", num1, result);
    } else if (opera == 'p') {
        result = power(num1, num2);
        printf("%.2lf ^ %.2lf = %.2lf", num1, num2, result);
    }}
     else if(df=='a'){

    printf("Enter 1 to find the area and perimeter of a square\n");
    printf("Enter 2 to find the area and perimeter of a circle\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter the side of the square: ");
        scanf("%lf", &side);

        area = areaOfSquare(side);
        perimeter = perimeterOfSquare(side);

        printf("Area of square = %lf\n", area);
        printf("Perimeter of square = %lf\n", perimeter);
    } else if(choice == 2) {
        printf("Enter the radius of the circle: ");
        scanf("%lf", &radius);

        area = areaOfCircle(radius);
        perimeter = perimeterOfCircle(radius);

        printf("Area of circle = %lf\n", area);
        printf("Circumference of circle = %lf\n", perimeter);
    } else {
        printf("Invalid choice. Please enter 1 or 2.\n");
    }}

    return 0;
}

