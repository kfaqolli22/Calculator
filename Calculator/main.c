#include <stdio.h>
	#include <math.h>


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


	int main() {
	    char operator;
	    double num1, num2, result;


	    printf("Enter an operator (+, -, *, /, s, p): ");
	    scanf("%c", &operator);


	    if (operator != 's') {
	        printf("Enter two numbers: ");
	        scanf("%lf %lf", &num1, &num2);
	    } else {
	        printf("Enter a number: ");
	        scanf("%lf", &num1);
	    }


	    if (operator == '+') {
	        result = add(num1, num2);
	        printf("%.2lf + %.2lf = %.2lf", num1, num2, result);
	    } else if (operator == '-') {
	        result = subtract(num1, num2);
	        printf("%.2lf - %.2lf = %.2lf", num1, num2, result);
	    } else if (operator == '*') {
	        result = multiply(num1, num2);
	        printf("%.2lf * %.2lf = %.2lf", num1, num2, result);
	    } else if (operator == '/') {
	        result = divide(num1, num2);
	        printf("%.2lf / %.2lf = %.2lf", num1, num2, result);
	    } else if (operator == 's') {
	        result = square_root(num1);
	        printf("sqrt(%.2lf) = %.2lf", num1, result);
	    } else if (operator == 'p') {
	        result = power(num1, num2);
	        printf("%.2lf ^ %.2lf = %.2lf", num1, num2, result);
	    } else {
	        printf("Invalid operator");
	    }


	    return 0;
	}

