#include <stdio.h>
#include "mymath.h"

int main() {
    double a = 10.0, b = 5.0;
    
    printf("Addition: a + b = %.2f\n", add(a, b));
    printf("Subtraction: a - b = %.2f\n", subtract(a, b));
    printf("Multiplication: a * b = %.2f\n", multiply(a, b));
    printf("Division: a / b = %.2f\n", divide(a, b));
    
    return 0;
}